//header

#include <stdio.h>

//checkposn[0] = row
int is_valid(int *queens, int check_posn[2])
{
	int col;
	int row_diff;
	int col_diff;

	col = 0;
	while (col < check_posn[1])
	{
		if (queens[col] == check_posn[0])
			return (0);
		row_diff = check_posn[0] - queens[col];
		if (row_diff < 0)
			row_diff *= -1;
		col_diff = check_posn[1] - col;
		if (col_diff < 0)
			col_diff *= -1;
		if (row_diff == col_diff)
			return (0);
		col++;
	}
	return (1);
}

void solver(int *queens, int col, int *count)
{
	int check_posn[2];
	int try_row;
	int i;

	i = 0;
	try_row = 0;
	check_posn[1] = col;
    if (col == 10) {
		*count += 1;
        while (i < 10)
            printf("%d ", queens[i++]);
        printf("\n");
        return;
    }
	while (try_row < 10)
	{
		check_posn[0] = try_row;
		if (is_valid(queens,check_posn))
		{
			queens[col] = try_row;
			solver(queens,col + 1,count);
			queens[col] = -1;
		}
		try_row++;
	}
}

int ft_ten_queens_puzzle(void)
{
	int queens[10]; // Array to hold the positions of the queens
	int i;
	int count;

	count = 0;
	i = 0;
	while (i < 10)
		queens[i++] = -1;
    solver(queens, 0, &count);  // Start solving from the first column
	return (count);
}

int main() {
	printf("%i",ft_ten_queens_puzzle());
    return 0;
}
