#include <nchan_defs.h>
#include <nchan_types.h>
ngx_int_t nchan_output_filter(ngx_http_request_t *r, ngx_chain_t *in);
ngx_int_t nchan_respond_status(ngx_http_request_t *r, ngx_int_t status_code, const ngx_str_t *status_line, ngx_int_t finalize);
ngx_int_t nchan_respond_string(ngx_http_request_t *r, ngx_int_t status_code, const ngx_str_t *content_type, const ngx_str_t *body, ngx_int_t finalize);
ngx_int_t nchan_respond_cstring(ngx_http_request_t *r, ngx_int_t status_code, const ngx_str_t *content_type, char *body, ngx_int_t finalize);
ngx_int_t nchan_respond_membuf(ngx_http_request_t *r, ngx_int_t status_code, const ngx_str_t *content_type, ngx_buf_t *body, ngx_int_t finalize);
ngx_table_elt_t * nchan_add_response_header(ngx_http_request_t *r, const ngx_str_t *header_name, const ngx_str_t *header_value);
ngx_int_t nchan_OPTIONS_respond(ngx_http_request_t *r, const ngx_str_t *allow_origin, const ngx_str_t *allowed_headers, const ngx_str_t *allowed_methods);
ngx_int_t nchan_respond_msg(ngx_http_request_t *r, nchan_msg_t *msg, ngx_int_t finalize, char **err);