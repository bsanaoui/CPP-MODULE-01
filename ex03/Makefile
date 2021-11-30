NAME = UnViolence

CC = clang++
FLAGS = -Werror -Wextra -Wall

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all : $(NAME)

$(NAME) : $(SRC)
	@$(CC) $(SRC) $(FLAG) -o $(NAME)

fclean : clean
	@rm -f $(NAME)

clean :

re : fclean all