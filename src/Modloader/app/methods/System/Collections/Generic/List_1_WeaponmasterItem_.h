#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_WeaponmasterItem_.h>
#include <Modloader/app/structs/WeaponmasterItem.h>
#include <Modloader/app/structs/WeaponmasterItem__Array.h>

namespace app::classes::System::Collections::Generic::List_1_WeaponmasterItem_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_WeaponmasterItem_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_WeaponmasterItem_* this_ptr, app::WeaponmasterItem* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::WeaponmasterItem__Array*, ToArray, app::List_1_WeaponmasterItem_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_WeaponmasterItem_
