#include "pessoa.h"

Pessoa::Pessoa()
    :nome("jonas gay\n")
{

}

std::string Pessoa::print() {
    return nome;
}