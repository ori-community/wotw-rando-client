#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttackableSwitch_AttackTypes__Enum.h>
#include <Modloader/app/structs/List_1_AttackableSwitch_AttackTypes_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_AttackableSwitch_AttackTypes_.h>

namespace app::classes::System::Collections::Generic::List_1_AttackableSwitch_AttackTypes_ {
    IL2CPP_REGISTER_METHOD(
        0x02D201B0,
        app::List_1_T_Enumerator_AttackableSwitch_AttackTypes_,
        GetEnumerator,
        app::List_1_AttackableSwitch_AttackTypes_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02F1CC20, bool, Contains, app::List_1_AttackableSwitch_AttackTypes_* this_ptr, app::AttackableSwitch_AttackTypes__Enum item)
} // namespace app::classes::System::Collections::Generic::List_1_AttackableSwitch_AttackTypes_
