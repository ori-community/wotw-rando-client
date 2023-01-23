#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinEnterExitTrigger.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::SeinEnterExitTrigger {
    IL2CPP_REGISTER_METHOD(0x00AD0F60, void, OnTriggerEnter, (app::SeinEnterExitTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00AD10F0, void, OnTriggerExit, (app::SeinEnterExitTrigger * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinEnterExitTrigger * this_ptr))
} // namespace app::classes::SeinEnterExitTrigger
