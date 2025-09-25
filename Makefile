all:
	make -C src/

clean:
	make clean -C src/

fclean:
	rm -rf build/
	make fclean -C src/

re:
	make re -C src/
run:
	./build/tchell

.PHONY: all clean fclean re
