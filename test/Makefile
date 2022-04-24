CC=cc -g -Wall -Wextra -Werror -fmax-errors=4
TEST=valgrind --leak-check=full --show-leak-kinds=all --quiet

run: test_strcon
	$(TEST) ./test_strcon

test_%: test_%.c ../*.h ../*.c
	$(CC) $< ../*.c -o $@

clean:
	rm -rf test_strcon
