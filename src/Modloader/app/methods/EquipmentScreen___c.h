#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/EquipmentScreen_c.h>

namespace app::classes::EquipmentScreen___c {
    IL2CPP_REGISTER_METHOD(0x00976790, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EquipmentScreen_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009768D0, bool, _FocusOnPreviousSelection_b__57_0, app::EquipmentScreen_c* this_ptr, app::CleverMenuItem* a)
} // namespace app::classes::EquipmentScreen___c
