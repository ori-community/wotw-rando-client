#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartEnter.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::CartEnter {
    IL2CPP_REGISTER_METHOD(0x00B37300, void, OnTriggerEnter, app::CartEnter* this_ptr, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CartEnter* this_ptr)
} // namespace app::classes::CartEnter
