#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_WeaponParameterMap_.h>
#include <Modloader/app/structs/WeaponParameterMap.h>

namespace app::classes::System::Collections::Generic::List_1_WeaponParameterMap_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::WeaponParameterMap*, get_Item, app::List_1_WeaponParameterMap_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_WeaponParameterMap_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_WeaponParameterMap_
