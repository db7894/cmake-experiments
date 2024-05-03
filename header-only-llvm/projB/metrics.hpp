#include "llvm/ADT/Hashing.h"

size_t hash(const std::pair<std::string, std::string> &x) const {
  return llvm::hash_code(llvm::hash_value<std::string, std::string>(x));
}
