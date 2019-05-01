# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <stdlib.h>

# include "struct.h"

int main(void)
{

int number = 20;

student students[number];
for(int i=0; i<number;i++)
{
    students[i].name=get_string("name:");
    students[i].sex=get_string("sex:");
    students[i].ID=get_int("ID:");
    students[i].midtermscore=get_int("midetermscore:");
    students[i].quiz1=get_int("quiz 1:");
    students[i].quiz2=get_int("quiz 2:");
    students[i].finalscore=get_int("fenale score:");
    students[i].totalscore=get_int("total score:");
}

FILE *file = fopen("students.CSV", "W");
if (file)

{

for(int i=0;i<20;i++)

{

fprintf(file,"%s,%s,%i,%i,%i,%i,%i,%i",students[i].name,students[i].sex,students[i].ID,students[i].midtermscore,students[i].quiz1,students[i].quiz2,students[i].finalscore,students[i].totalscore);


}

fclose(file);

}
}




