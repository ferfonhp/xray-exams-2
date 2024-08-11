#ifndef EXAM
#define EXAM

#include "condition.h"

#include <time.h> // struct tm

typedef struct exam Exam;

// Cria um novo exame, alocando memória para a estrutura, preenchendo os campos com os dados passados como parâmetros e retornando um ponteiro para a estrutura criada.
Exam* create_exam(int id, int patient_id, int rx_id, struct tm *time);

// Libera a memória alocada para a estrutura de exame.
void destroy_exam(Exam *exam);

// Retorna a identificação única do exame.
int get_exam_id(const Exam *exam);

// Retorna a identificação única do paciente associado ao exame.
int get_exam_patient_id(const Exam *exam);

// Retorna a identificação única do aparelho de raio-X utilizado no exame.
int get_exam_rx_id(const Exam *exam);

// Retorna o horário de realização do exame.
struct tm* get_exam_time(const Exam *exam);

char* get_exam_time_string(const Exam *exam);

Condition* get_exam_condition(Exam *exam);

int get_exam_condition_gravity(Exam *exam);

char* get_exam_condition_name(Exam *exam);

void set_exam_condition(Exam *exam, int id, char* nome_cond, int grav);

void print_exam(Exam *exam);

char* exam_output(Exam *exam);

#endif