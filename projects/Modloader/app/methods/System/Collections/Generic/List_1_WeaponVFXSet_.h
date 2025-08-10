#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_T_Enumerator_WeaponVFXSet_.h>
#include <Modloader/app/structs/List_1_WeaponVFXSet_.h>
#include <Modloader/app/structs/WeaponVFXSet.h>

namespace app::classes::System::Collections::Generic::List_1_WeaponVFXSet_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_WeaponVFXSet_, GetEnumerator, app::List_1_WeaponVFXSet_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_WeaponVFXSet_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_WeaponVFXSet_* this_ptr, app::WeaponVFXSet* item)
} // namespace app::classes::System::Collections::Generic::List_1_WeaponVFXSet_
