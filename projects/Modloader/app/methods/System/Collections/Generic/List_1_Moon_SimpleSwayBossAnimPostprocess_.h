#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_Moon_SimpleSwayBossAnimPostprocess_.h>
#include <Modloader/app/structs/List_1_Moon_SimpleSwayBossAnimPostprocess_.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_SimpleSwayBossAnimPostprocess_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_SimpleSwayBossAnimPostprocess_, GetEnumerator, (app::List_1_Moon_SimpleSwayBossAnimPostprocess_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_SimpleSwayBossAnimPostprocess_ * this_ptr, app::SimpleSwayBossAnimPostprocess* item))
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_SimpleSwayBossAnimPostprocess_ * this_ptr, app::SimpleSwayBossAnimPostprocess* item))
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_Moon_SimpleSwayBossAnimPostprocess_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_SimpleSwayBossAnimPostprocess_
