#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnergyDoorSlot.h>
#include <Modloader/app/structs/List_1_EnergyDoorSlot_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_EnergyDoorSlot_.h>

namespace app::classes::System::Collections::Generic::List_1_EnergyDoorSlot_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_EnergyDoorSlot_* this_ptr, app::EnergyDoorSlot* item)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_EnergyDoorSlot_, GetEnumerator, app::List_1_EnergyDoorSlot_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_EnergyDoorSlot_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_EnergyDoorSlot_
