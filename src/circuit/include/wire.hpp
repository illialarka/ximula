#ifndef WIRE_H
#define WIRE_H

/*
* The wires in a circuit carry the electric current to various
* pars of en electrical system.
*/

namespace Circuit {

class Wire {
	public:
		Wire() { }
		
		operator bool() const;

	private:
		bool value_ = false;
};

} // namespace Circuit

#endif // WIRE_H
