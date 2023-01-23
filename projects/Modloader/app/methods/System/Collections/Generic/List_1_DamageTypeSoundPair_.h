#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageTypeSoundPair.h>
#include <Modloader/app/structs/List_1_DamageTypeSoundPair_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_DamageTypeSoundPair_.h>

namespace app::classes::System::Collections::Generic::List_1_DamageTypeSoundPair_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DamageTypeSoundPair*, get_Item, (app::List_1_DamageTypeSoundPair_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04766C98, List_1_DamageTypeSoundPair__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DamageTypeSoundPair_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771C90, List_1_DamageTypeSoundPair__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_DamageTypeSoundPair_, GetEnumerator, (app::List_1_DamageTypeSoundPair_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474E8A8, List_1_DamageTypeSoundPair__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_DamageTypeSoundPair_
