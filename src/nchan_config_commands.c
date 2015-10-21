//AUTOGENERATED, do not edit! see nchan_commands.rb
static ngx_command_t  nchan_commands[] = {
    { ngx_string("nchan_pubsub"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4|NGX_CONF_TAKE5,
    nchan_pubsub_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_subscriber"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4,
    nchan_subscriber_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("push_subscriber"), //legacy for nchan_subscriber
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS|NGX_CONF_TAKE1|NGX_CONF_TAKE2|NGX_CONF_TAKE3|NGX_CONF_TAKE4,
    nchan_subscriber_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_subscriber_concurrency"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_subscriber_concurrency,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_concurrency),
    NULL } ,
  { ngx_string("push_subscriber_concurrency"), //legacy for nchan_subscriber_concurrency
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_subscriber_concurrency,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_concurrency),
    NULL } ,

  { ngx_string("nchan_publisher"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS,
    nchan_publisher_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("push_publisher"), //legacy for nchan_publisher
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_NOARGS,
    nchan_publisher_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_subscriber_timeout"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_timeout),
    NULL } ,
  { ngx_string("push_subscriber_timeout"), //legacy for nchan_subscriber_timeout
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, subscriber_timeout),
    NULL } ,

  { ngx_string("nchan_store_messages"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_store_messages_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("push_store_messages"), //legacy for nchan_store_messages
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_store_messages_directive,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_max_reserved_memory"),
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_size_slot,
    NGX_HTTP_MAIN_CONF_OFFSET,
    offsetof(nchan_main_conf_t, shm_size),
    NULL } ,
  { ngx_string("push_max_reserved_memory"), //legacy for nchan_max_reserved_memory
    NGX_HTTP_MAIN_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_size_slot,
    NGX_HTTP_MAIN_CONF_OFFSET,
    offsetof(nchan_main_conf_t, shm_size),
    NULL } ,

  { ngx_string("nchan_message_buffer_length"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_buffer_length,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,
  { ngx_string("push_message_buffer_length"), //legacy for nchan_message_buffer_length
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_message_buffer_length,
    NGX_HTTP_LOC_CONF_OFFSET,
    0,
    NULL } ,

  { ngx_string("nchan_message_timeout"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, buffer_timeout),
    NULL } ,
  { ngx_string("push_message_timeout"), //legacy for nchan_message_timeout
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, buffer_timeout),
    NULL } ,

  { ngx_string("nchan_min_message_buffer_length"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, min_messages),
    NULL } ,
  { ngx_string("push_min_message_buffer_length"), //legacy for nchan_min_message_buffer_length
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, min_messages),
    NULL } ,

  { ngx_string("nchan_max_message_buffer_length"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_messages),
    NULL } ,
  { ngx_string("push_max_message_buffer_length"), //legacy for nchan_max_message_buffer_length
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_messages),
    NULL } ,

  { ngx_string("nchan_delete_oldest_received_message"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, delete_oldest_received_message),
    NULL } ,
  { ngx_string("push_delete_oldest_received_message"), //legacy for nchan_delete_oldest_received_message
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, delete_oldest_received_message),
    NULL } ,

  { ngx_string("nchan_authorized_channels_only"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, authorize_channel),
    NULL } ,
  { ngx_string("push_authorized_channels_only"), //legacy for nchan_authorized_channels_only
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, authorize_channel),
    NULL } ,

  { ngx_string("nchan_channel_group"),
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_str_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_group),
    NULL } ,
  { ngx_string("push_channel_group"), //legacy for nchan_channel_group
    NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_str_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_group),
    NULL } ,

  { ngx_string("nchan_max_channel_id_length"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_channel_id_length),
    NULL } ,
  { ngx_string("push_max_channel_id_length"), //legacy for nchan_max_channel_id_length
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_channel_id_length),
    NULL } ,

  { ngx_string("nchan_max_channel_subscribers"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_channel_subscribers),
    NULL } ,
  { ngx_string("push_max_channel_subscribers"), //legacy for nchan_max_channel_subscribers
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_num_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, max_channel_subscribers),
    NULL } ,

  { ngx_string("nchan_ignore_queue_on_no_cache"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, ignore_queue_on_no_cache),
    NULL } ,
  { ngx_string("push_ignore_queue_on_no_cache"), //legacy for nchan_ignore_queue_on_no_cache
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_flag_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, ignore_queue_on_no_cache),
    NULL } ,

  { ngx_string("nchan_channel_timeout"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_timeout),
    NULL } ,
  { ngx_string("push_channel_timeout"), //legacy for nchan_channel_timeout
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    ngx_conf_set_sec_slot,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, channel_timeout),
    NULL } ,

  { ngx_string("nchan_storage_engine"),
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_storage_engine,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, storage_engine),
    NULL } ,
  { ngx_string("push_storage_engine"), //legacy for nchan_storage_engine
    NGX_HTTP_MAIN_CONF|NGX_HTTP_SRV_CONF|NGX_HTTP_LOC_CONF|NGX_CONF_TAKE1,
    nchan_set_storage_engine,
    NGX_HTTP_LOC_CONF_OFFSET,
    offsetof(nchan_loc_conf_t, storage_engine),
    NULL } ,


  ngx_null_command
};
