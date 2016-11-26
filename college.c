
typedef struct
{
	short Course_id;
	char Course_name[10];
	short grade;
	char IsCompleted;
}Course;
typedef struct
{
	short Lecturer_id;
	Course courses[10];
	char name[10];
}Lecturer;
typedef struct
{
	short Student_id;
	char name[10];
	Course courses[10];
};

//function, given an instance of the struct, it's type ('s'-student,'l'-lectureres, 'c'-college), and it's size
//saves the given data in binary format
int save_data(struct *ptr, char type, int size_of){
  FILE * file= fopen("output"+type, "wb");
  int flag = 0;
  
  flag = (file != NULL);
  (flag) ? fwrite(ptr, size_of, 1, file):0;
  
  fclose(file);

  return flag;
}

void read_data
