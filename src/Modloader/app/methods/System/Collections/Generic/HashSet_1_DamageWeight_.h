#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/HashSet_1_DamageWeight_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_DamageWeight_ {
    IL2CPP_REGISTER_METHOD(0x02AB90A0, bool, Contains, app::HashSet_1_DamageWeight_* this_ptr, app::DamageWeight__Enum item)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_DamageWeight_* this_ptr, app::DamageWeight__Enum item)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_DamageWeight_* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_DamageWeight_
