#include "include/wire.hpp"

namespace Circuit {

Wire::operator bool() const {
	return this->value_; 
}

} // namespace Circuit
