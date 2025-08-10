#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Collider2D.h>
#include <Modloader/app/structs/TriggerZone.h>

namespace app::classes::Moon::TriggerZone {
    IL2CPP_REGISTER_METHOD(0x031B0F80, void, add_OnEnterTrigger, app::TriggerZone* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x031B1070, void, remove_OnEnterTrigger, app::TriggerZone* this_ptr, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x00F506B0, void, OnTriggerEnter2D, app::TriggerZone* this_ptr, app::Collider2D* other)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TriggerZone* this_ptr)
} // namespace app::classes::Moon::TriggerZone
