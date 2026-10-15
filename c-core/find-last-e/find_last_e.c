#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "e\n", 2);
        return 0;
    }

    int i = 0;
    int found = 0;

    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == 'e')
        {
            found = 1;
        }
        i++;
    }

    if (found == 1)
    {
        write(1, "e\n", 2);
    }
    else
    {
        write(1, "\n", 1);
    }

    return 0;
}
