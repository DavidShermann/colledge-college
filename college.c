
typedef struct{
  short std_id;
  char[10] name;
  short age;
}students;

typedef struct{
  short lctr_id;
  char[10] name;
  short age;
}lectureres;

typedef struct{
  char[10] name;
}college;

//function, given an instance of the struct, it's type ('s'-student,'l'-lectureres, 'c'-college), and it's size
//saves the given data in binary format
int save_data(struct *ptr, char type, int size_of){
  FILE * file= fopen("output"+type, "wb");
  int flag = 0;
  
  flag = (file != NULL);
  (flag) ? fwrite(std_ptr, size_of, 1, file):0;
  
  fclose(file);

  return flag;
}

void read_data
