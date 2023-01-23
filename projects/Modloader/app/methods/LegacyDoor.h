#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/LegacyDoor.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::LegacyDoor {
    IL2CPP_REGISTER_METHOD(0x00A1A4A0, app::SceneRoot*, get_SceneRoot, (app::LegacyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1A590, void, OnTriggerStay, (app::LegacyDoor * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00A1A6D0, void, ctor, (app::LegacyDoor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A1A760, void, cctor, ())
} // namespace app::classes::LegacyDoor
