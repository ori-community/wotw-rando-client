#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GravityDirectionChangerZone.h>

namespace app::classes::GravityDirectionChangerZone {
    IL2CPP_REGISTER_METHOD(0x01082F70, void, OnTriggerEnter, app::GravityDirectionChangerZone* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::GravityDirectionChangerZone* this_ptr)
} // namespace app::classes::GravityDirectionChangerZone
