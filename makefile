helloworld.out: helloworld.c
    gcc helloworld.c -o helloworld.out
test: helloworld.c
    true