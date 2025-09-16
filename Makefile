all:
	make -C src/

clean:
	make clean -C src/

fclean:
	make fclean -C src/

re:
	make re -C src/

.PHONY: all clean fclean re
