#include <stdio.h>

void replicate(char* s)
{
	int i;
	char* t = s;

	for (i = 0; i < 589; i++)
		putchar(*s++);

	printf("replicate(\"");

	while (*t != '\0') {
		if (*t == '\n') {
			putchar('\\');
			putchar('n');
		}
		else if (*t == '\t') {
			putchar('\\');
			putchar('t');
		}
		else if (*t == '"') {
			putchar('\\');
			putchar('"');
		}
		else if (*t == '\'') {
			putchar('\\');
			putchar('\'');
		}
		else if (*t == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(*t);

		t++;
	}

	printf("\");\n\t");

	while (*s != '\0')
		putchar(*s++);
}

int main()
{
	replicate("#include <stdio.h>\n\nvoid replicate(char* s)\n{\n\tint i;\n\tchar* t = s;\n\n\tfor (i = 0; i < 589; i++)\n\t\tputchar(*s++);\n\n\tprintf(\"replicate(\\\"\");\n\n\twhile (*t != \'\\0\') {\n\t\tif (*t == \'\\n\') {\n\t\t\tputchar(\'\\\\\');\n\t\t\tputchar(\'n\');\n\t\t}\n\t\telse if (*t == \'\\t\') {\n\t\t\tputchar(\'\\\\\');\n\t\t\tputchar(\'t\');\n\t\t}\n\t\telse if (*t == \'\"\') {\n\t\t\tputchar(\'\\\\\');\n\t\t\tputchar(\'\"\');\n\t\t}\n\t\telse if (*t == \'\\\'\') {\n\t\t\tputchar(\'\\\\\');\n\t\t\tputchar(\'\\\'\');\n\t\t}\n\t\telse if (*t == \'\\\\\') {\n\t\t\tputchar(\'\\\\\');\n\t\t\tputchar(\'\\\\\');\n\t\t}\n\t\telse\n\t\t\tputchar(*t);\n\n\t\tt++;\n\t}\n\n\tprintf(\"\\\");\\n\\t\");\n\n\twhile (*s != \'\\0\')\n\t\tputchar(*s++);\n}\n\nint main()\n{\n\treturn 0;\n}");
	return 0;
}