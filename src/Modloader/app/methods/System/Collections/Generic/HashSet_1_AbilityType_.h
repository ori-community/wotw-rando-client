#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/HashSet_1_AbilityType_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_AbilityType_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_AbilityType_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, app::HashSet_1_AbilityType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_AbilityType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB7360, app::HashSet_1_T_Enumerator_AbilityType_, GetEnumerator, app::HashSet_1_AbilityType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, app::HashSet_1_AbilityType_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_AbilityType_* this_ptr, app::AbilityType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02AB6EC0, bool, Contains, app::HashSet_1_AbilityType_* this_ptr, app::AbilityType__Enum item)
    IL2CPP_REGISTER_METHOD(0x02AB7040, bool, Remove, app::HashSet_1_AbilityType_* this_ptr, app::AbilityType__Enum item)
} // namespace app::classes::System::Collections::Generic::HashSet_1_AbilityType_
