#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageSoundSource.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::DamageSoundSource {
    IL2CPP_REGISTER_METHOD(0x00505C70, void, Awake, app::DamageSoundSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DC9640, void, OnRecieveDamage, app::DamageSoundSource* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DamageSoundSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::DamageSoundSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::DamageSoundSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00405E60, void, _OnRecieveDamage_b__4_0, app::DamageSoundSource* this_ptr)
} // namespace app::classes::DamageSoundSource
