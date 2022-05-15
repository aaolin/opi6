/*!
\file
\brief Заголовочный файл с описанием классов

Данный файл содержит в себе определения основных 
классов, используемых в демонстрационной программе
*/
#ifndef bib_H ///< предотращение повтрного включения файла
#define bib_H 
#include <iostream>

extern int add(std::string firstarg, std::string secondarg); ///<функция сложения
extern int sub(std::string firstarg, std::string secondarg); ///<функция вычитания
extern int multi(std::string firstarg, std::string secondarg); ///<функция умножения

#endif ///< также предотвращает повторное включение (конец включения если не определена)
 
