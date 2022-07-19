#ifndef NCHAN_REDIS_LUA_SCRIPTS_H
#define NCHAN_REDIS_LUA_SCRIPTS_H
// don't edit this please, it was auto-generated by hsss
// https://github.com/slact/hsss

typedef struct {
  char *name;
  char *hash;
  char *script;
} redis_lua_script_t;

typedef struct {
  //input:  keys: [], values: [namespace, channel_id, number, time, nginx_worker_id]
  //output: -none-
  redis_lua_script_t add_fakesub;

  //input:  keys: [], values: [namespace, channel_id, ttl]
  // ttl is for when there are no messages but at least 1 subscriber.
  //output: seconds until next keepalive is expected, or -1 for "let it disappear"
  redis_lua_script_t channel_keepalive;

  //input: keys: [],  values: [ namespace, channel_id, publish_command, use_accurate_subscriber_count ]
  //output: channel_hash {ttl, time_last_seen, subscribers, messages} or nil
  // delete this channel and all its messages
  redis_lua_script_t delete;

  //input: keys: [],  values: [ namespace, channel_id, use_accurate_subscriber_count ]
  //output: channel_hash {ttl, time_last_seen, subscribers, last_channel_id, messages} or nil
  // finds and return the info hash of a channel, or nil of channel not found
  redis_lua_script_t find_channel;

  //input:  keys: [], values: [namespace, channel_id, msg_time, msg_tag, no_msgid_order, create_channel_ttl]
  //output: result_code, msg_ttl, msg_time, msg_tag, prev_msg_time, prev_msg_tag, message, content_type, eventsource_event, compression_type, channel_subscriber_count
  // no_msgid_order: 'FILO' for oldest message, 'FIFO' for most recent
  // create_channel_ttl - make new channel if it's absent, with ttl set to this. 0 to disable.
  // result_code can be: 200 - ok, 404 - not found, 410 - gone, 418 - not yet available
  redis_lua_script_t get_message;

  //input:  keys: [message_key], values: []
  //output: msg_ttl, msg_time, msg_tag, prev_msg_time, prev_msg_tag, message, content_type, eventsource_event, compression, channel_subscriber_count
  redis_lua_script_t get_message_from_key;

  //input:  keys: [unique_request_id_key], values: []
  //output: next_unique_request_id_integer
  redis_lua_script_t get_subscriber_info_id;

  //input:  keys: [], values: [namespace, channel_id, time, message, content_type, eventsource_event, compression_setting, msg_ttl, max_msg_buf_size, pubsub_msgpacked_size_cutoff, optimize_target, publish_command, use_accurate_subscriber_count]
  //output: channel_hash {ttl, time_last_subscriber_seen, subscribers, last_message_id, messages}, channel_created_just_now?
  redis_lua_script_t publish;

  //input:  keys: [], values: [namespace, channel_id, status_code, publish_command]
  //output: current_subscribers
  redis_lua_script_t publish_status;

  //input: keys: [],  values: [ namespace, channel_id, info_response_id ]
  //output: -nothing-
  redis_lua_script_t request_subscriber_info;

  //redis-store consistency check
  redis_lua_script_t rsck;

  //input: keys: [], values: [namespace, channel_id, subscriber_id, active_ttl, time, want_channel_settings]
  //  'subscriber_id' can be '-' for new id, or an existing id
  //  'active_ttl' is channel ttl with non-zero subscribers. -1 to persist, >0 ttl in sec
  //output: subscriber_id, num_current_subscribers, next_keepalive_time, channel_buffer_length
  //  'channel_buffer_length' is returned only if want_channel_settings is 1
  redis_lua_script_t subscriber_register;

  //input: keys: [], values: [namespace, channel_id, subscriber_id, empty_ttl]
  // 'subscriber_id' is an existing id
  // 'empty_ttl' is channel ttl when without subscribers. 0 to delete immediately, -1 to persist, >0 ttl in sec
  //output: subscriber_id, num_current_subscribers
  redis_lua_script_t subscriber_unregister;

} redis_lua_scripts_t;
extern redis_lua_scripts_t redis_lua_scripts;
extern const int redis_lua_scripts_count;
#define REDIS_LUA_SCRIPTS_ALL_HASHES "4b36c27da7255516cf90db8493e6f9bbc603bedf 84fa757e5402c1360df02663ecfa03efb0d9747e 8cd34ac87468ef61a4335ec5e15dadb9b48074da 61a1d3b4191923c76778aec8f8af218b2103c4c9 fb9c46d33b3798a11d4eca6e0f7a3f92beba8685 304efcd42590f99e0016686572530defd3de1383 3490d5bc3fdc7ed065d9d54b4a0cb8ad6b62c180 710c47cd43540d116fac9d8db50ab97c8edfb553 868da11fde87043c24d82285d0b31adbbdcef406 93c500e094dfc5364251854eeac8d4331a0223c0 2fca046fa783d6cc25e493c993c407e59998e6e8 94fe1e76b0a6c9aed3d5f17e6a03e01d621b9cef 51f4b6919ec97d42f5a9a7a10ee7742579b6a8f4"
#define REDIS_LUA_SCRIPTS_COUNT 13
#define REDIS_LUA_SCRIPTS_EACH(script) \
for((script)=(redis_lua_script_t *)&redis_lua_scripts; (script) < (redis_lua_script_t *)(&redis_lua_scripts + 1); (script)++) 
#endif //NCHAN_REDIS_LUA_SCRIPTS_H
