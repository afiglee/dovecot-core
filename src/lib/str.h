#ifndef __STR_H
#define __STR_H

string_t *str_new(pool_t pool, size_t initial_size);
string_t *t_str_new(size_t initial_size);
void str_free(string_t *str);

const char *str_c(string_t *str);
const unsigned char *str_data(const string_t *str);
char *str_c_modifyable(string_t *str);
size_t str_len(const string_t *str);

/* Append string/character */
void str_append(string_t *str, const char *cstr);
void str_append_n(string_t *str, const void *cstr, size_t max_len);
void str_append_c(string_t *str, unsigned char chr);
void str_append_str(string_t *dest, const string_t *src);

/* Append printf()-like data */
void str_printfa(string_t *str, const char *fmt, ...)
	__attr_format__(2, 3);
void str_vprintfa(string_t *str, const char *fmt, va_list args);

/* Delete/truncate */
void str_delete(string_t *str, size_t pos, size_t len);
void str_truncate(string_t *str, size_t len);

#endif
