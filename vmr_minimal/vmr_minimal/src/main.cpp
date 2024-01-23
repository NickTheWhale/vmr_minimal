#include "vmr_helper.h"

#include <iostream>

int main(int argc, char** argv)
{
	T_VBVMR_INTERFACE iVMR;

	if (!vmr::helper::initialize(iVMR))
	{
		std::cerr << "failed to init vmr\n";
		return -1;
	}
	vmr::helper::cleanup(iVMR);

	return 0;
}