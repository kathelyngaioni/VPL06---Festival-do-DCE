#ifndef ACAI_H
#define ACAI_H

#include "produto.hpp"


class Acai : public Produto {
private:
  int _tamanho;
  std::vector<std::string>_complementos;

 public:
  
  Acai(int tamanho,std::vector<std::string>& complementos,int qtd);

  float calcPreco() override;

  std::string descricao() const override;

 
};
#endif