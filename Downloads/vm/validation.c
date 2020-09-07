#include "corewar.h"


static int	check_extension(char *file_name)
{
	int		l;

	l = ft_strlen(file_name);
	if (l < 5 || \
		file_name[l - 1] != 'r' || \
		file_name[l - 2] != 'o' || \
		file_name[l - 3] != 'c' || \
		file_name[l - 4] != '.' )
		return (BAD_EXT);
	return (OK);
}

int valid(t_vm vm,int ac,char *av[])
{
	// инициализи
	// ровать переменную (список) для хранения ботов,
	//  чьи порядковые номера не определены флагом "-n"
    t_bot *players_without_n;
    
    int col_players;
    
    int serial_number;
    int max_serial_number;
	int i;

	col_players = 0;
	serial_number = 0;
	max_serial_number = 0;
	i = 0;
	ft_bzero(players_without_n,sizeof(t_bot));

	while(--argc)
	{
		if (check_extension(av[i]))
		{
			col_players++;
			 if (col_players < MAX_PLAYERS)
			error;
			 
			 // значение переменной порядкового номера больше нуля?
				if (!serial_number > 0) 
				{
					// создать и добавить новый элемент в начало списка для хранения ботов;
					// успешно?
					if(!ft_lstadd())
						error;
					// передать в функцию ниже адрес содержимого созданного элемента списка
					proccessing_bot(vm->players);
				}
					// элемент массива players* структуры t_vm* с порядковым 
					// номером равным значению переменной порядкового 
					// номера равен NULL?(  есть повторение номера?)
					if(!vm->players[serial_number] == NULL)
					{
						// сообщить об ошибке
						// очистить список и содержимое.
						// вернуть код ошибки
					}
						
					if(proccessing_bot(players_without_n[serial_number])
						// обнулить переменную порядкового номера
						serial_number = 0;
				}
				if (serial_number > 0) 
					error
					// сообщить об ошибке
					// очистить список и содержимое
					// вернуть код ошибки
				if (argv[argc] == "-dump")
					flag_dump(argv[argc++],vm);
				if (argv[argc] == "-n")
				{
					// присвоить полученное значение в переменную порядкового номера
					serial_number = flag_n(argv[argc++],vm);
					if(serial_number > max_serial_number)
					// новое значение порядкового номера больше чем значение максимального порядкового номера?
						max_serial_number = serial_number;
					// сообщить об ошибке
					// очистить список и содержимое
					// вернуть код ошибки
				}
				
		}
		if(max_serial_number > col_players) 
		{
			error;
		}
	while(players[i] < MAX_PLAYERS)
	{
		players[i] = 
		i++;
	}
		  
	}
}
void	flag_dump(char *str,t_vm vm)
{
	int num;

// следующую строку привести в тип int
	num = ft_atoi(str);
	// полученное значение укладывается в тип size_t?
	if(num == (size_t(num)))
	// присвоить значение в переменную dump структуры t_vm*
		vm->dump = num;

}
int flag_n(char *str,t_vm vm)
{
	int num;

	num = ft_atoi(str);
	if(!num >= 0 && num <= MAX_PLAYERS)
		error;
	return num;
	
}
int main(int ac,char **av)
{
    int i;

    i = 0;
    while(i < argc)
   

} 