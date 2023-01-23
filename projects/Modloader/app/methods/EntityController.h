#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/EntityController.h>
#include <Modloader/app/structs/Enemy2D.h>
#include <Modloader/app/structs/TextureAnimation.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::EntityController {
    IL2CPP_REGISTER_METHOD(0x00C8D800, app::Vector3, get_LastSeenSeinPosition, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8D820, void, set_LastSeenSeinPosition, (app::EntityController * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00C8D830, app::Enemy2D*, get_Enemy2D, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8D8F0, bool, get_NearSein, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8D9F0, void, OnValidate, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8DAE0, void, Awake, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEnd, (app::EntityController * this_ptr, app::TextureAnimation* anim))
    IL2CPP_REGISTER_METHOD(0x00C8DF10, void, OnRecieveDamage, (app::EntityController * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritLeached, (app::EntityController * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x005100F0, void, OnNearSeinEnter, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B16F70, void, OnNearSeinExit, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C8DFB0, void, OnSeinNearStay, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::EntityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::EntityController * this_ptr))
} // namespace app::classes::EntityController
