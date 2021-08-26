#include <foo/foo.h>
#include <bar/bar.h>

#include <stdio.h>

int foobar()
{
    printf("FOO_NUMBER = %d\n", FOO_NUMBER);
    printf("BAR_NUMBER = %d\n", BAR_NUMBER);
    return FOO_NUMBER + BAR_NUMBER;
}

