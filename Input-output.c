字符输入输出
putchar(int c) - 输出一个字符。
getchar() - 获取一个字符。
字符串输入输出
puts(const char *str) - 输出一个字符串。
fputs(const char *str, FILE *stream) - 向流中输出一个字符串。
gets(char *str) - 获取一个字符串（不建议使用，因为它容易受到缓冲区溢出的攻击）。
格式化输入输出
printf(const char *format, ...) - 输出格式化的字符串。
fprintf(FILE *stream, const char *format, ...) - 向流中输出格式化的字符串。
sprintf(char *str, const char *format, ...) - 将格式化的字符串保存到字符数组中。
snprintf(char *str, size_t size, const char *format, ...) - 类似于sprintf，但是会检查输出缓冲区的剩余空间，以避免溢出。
文件输入输出
fopen(const char *path, const char *mode) - 打开一个文件。
fclose(FILE *stream) - 关闭一个文件。
fread(void *ptr, size_t size, size_t nmemb, FILE *stream) - 从文件读取数据。
fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream) - 将数据写入文件。
fseek(FILE *stream, long int offset, int whence) - 移动文件指针。
ftell(FILE *stream) - 获取当前文件指针的位置。
rewind(FILE *stream) - 将文件指针重置到文件开始位置。
