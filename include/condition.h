#ifndef CONDITION
#define CONDITION

typedef struct condition Condition;

/**
 * Cria e retorna um ponteiro do tipo Condition.
 *
 * @param id  Número identificador da Condition.
 * @param name  Nome da Condition.
 * @param gravity  Número que indica o Nível de gravidade da Condition (1 - 6).
 * 
 * @return Ponteiro para a Condition recém criada com os parâmetros.
 */
Condition* create_condition(int id, char *name, int gravity);

/**
 * Remove e libera alocação de memória do ponteiro do tipo Condition.
 *
 * @param condition Ponteiro do tipo Condition.
 */
void destroy_condition(Condition *condition);

/**
 * Retorna o número identificador da Condition passada no argumento.
 * 
 * @param condition Ponteiro do tipo Condition.
 * 
 * @return Número identificador da Condition.
 */
int get_condition_id(Condition *condition);

/**
 * Retorna o nome da Condition passada no argumento.
 * 
 * @param condition Ponteiro do tipo Condition.
 * 
 * @return Nome da Condition.
 */
char* get_condition_name(Condition *condition);

/**
 * Retorna a gravidade da Condition passada no argumento.
 * 
 * @param condition Ponteiro do tipo Condition.
 * 
 * @return Nível de gravidade da Condition.
 */
int get_condition_gravity(Condition *condition);

/**
 * Retorna um ponteiro criado com a condição escolhida pela probabilidade definida.
 * 
 * @returns Nova Condition com propriedades escolhidas por probabilidade.
 */
Condition* get_condition();

/**
 * Imprime na tela  passada no argumento.
 * 
 * @param condition Ponteiro do tipo Condition.
 */
void print_condition(Condition *condition);

/**
 * Retorna string com todas informações da Condition passada no argumento.
 * 
 * @param condition Ponteiro do tipo Condition.
 * 
 * @return String com todas propriedades do ponteiro Condition.
 */
char* condition_output(Condition *condition);

#endif