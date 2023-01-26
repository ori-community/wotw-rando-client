#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_EquipmentType_.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>

namespace app::classes::System::Collections::Generic::HashSet_1_EquipmentType_ {
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_EquipmentType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB90A0, bool, Contains, (app::HashSet_1_EquipmentType_ * this_ptr, app::EquipmentType__Enum item))
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_EquipmentType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_EquipmentType_ * this_ptr, app::EquipmentType__Enum item))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_EquipmentType_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_EquipmentType_
