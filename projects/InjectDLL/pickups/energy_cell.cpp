#include <pch.h>
#include <interception_macros.h>

bool collecting_energy_cell = false;

INTERCEPT(5813104, void, SeinPickupProcessor__OnCollectMaxEnergyHalfContainerPickup, (__int64 this_ptr, __int64 pickupPointer), {
	collecting_energy_cell = true;
	SeinPickupProcessor__OnCollectMaxEnergyHalfContainerPickup(this_ptr, pickupPointer);
	collecting_energy_cell = false;
});

INTERCEPT(9450736, void, SeinEnergy__set_BaseMaxEnergy, (SeinEnergy_o* this_ptr, float value), {
	if(collecting_energy_cell)
		return;
	
	SeinEnergy__set_BaseMaxEnergy(this_ptr, value);
});

INTERCEPT(9449664, void, SeinEnergy__set_Current, (SeinEnergy_o* this_ptr, float value), {
	if(collecting_energy_cell)
		return;
	
	SeinEnergy__set_Current(this_ptr, value);
});

INTERCEPT(8454368, void, SeinLevel__set_PartialEnergyContainers, (SeinLevel_o* this_ptr, int value), {
	if(collecting_energy_cell)
		return;

	SeinLevel__set_PartialEnergyContainers(this_ptr, value);
});

INTERCEPT(8454176, int, SeinLevel__get_PartialEnergyContainers, (SeinLevel_o* this_ptr), {
	if(collecting_energy_cell)
		return 1;

	return SeinLevel__get_PartialEnergyContainers(this_ptr);
});
