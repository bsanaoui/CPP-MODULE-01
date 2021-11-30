NAME = Zombie

CC = clang++
FLAGS = -Werror -Wextra -Wall

SRC = main.cpp ZombieHorde.cpp Zombie.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all