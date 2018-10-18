#ifndef __NVRAM_FAKER_H__
#define __NVRAM_FAKER_H__

void nvram_init(void *unused);
void nvram_commit(void *unused, void *unused2);
void nvram_close(void *unused);

char *nvram_get(const char *key);
char *nvram_bufget(const void *unused, const char *key);

int nvram_set(const char *key, const char *value);
int nvram_bufset(const void *unused, const char *key, const char *value);


#endif /* __NVRAM_FAKER_H__ */
