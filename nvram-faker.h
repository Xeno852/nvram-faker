#ifndef __NVRAM_FAKER_H__
#define __NVRAM_FAKER_H__

void nvram_init(void *unused);
void nvram_commit(void *unused, void *unused2);
void nvram_clear(void *unused);
void nvram_close(void *unused);

/***************************************************
 Uncomment single parameter prototype if needed.
 Here and in nvram-faker.c
****************************************************/
char *nvram_get(const void *unused, const char *key);
int nvram_set(const void *unused, const char *key, const char *value);
//char *nvram_get(const char *key);
//int nvram_set(const char *key, const char *value);

char *nvram_bufget(const void *unused, const char *key);
int nvram_bufset(const void *unused, const char *key, const char *value);

int getNvramIndex(const char *key);
char *getNvramName(const int index);
int getNvramNum();

#endif /* __NVRAM_FAKER_H__ */
