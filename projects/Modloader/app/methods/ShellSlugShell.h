#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ShellSlugShell {
    IL2CPP_REGISTER_METHOD(0x005B3ED0, void, ShatterEffectPrefabsInstantiation, (app::ShellSlugShell * this_ptr, app::List_1_DynamicInstantiationDescriptor_* instantiations))
    IL2CPP_REGISTER_METHOD(0x005B4110, void, SetForce, (app::ShellSlugShell * this_ptr, app::Vector2 velocity, float angular_velocity))
    IL2CPP_REGISTER_METHOD(0x005B43D0, void, Awake, (app::ShellSlugShell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B4550, void, OnRecieveDamage, (app::ShellSlugShell * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x005B4940, void, Shatter, (app::ShellSlugShell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B4BC0, void, PlayShake, (app::ShellSlugShell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B4CA0, void, OnCollisionEnter, (app::ShellSlugShell * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x005B4D00, void, ctor, (app::ShellSlugShell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::ShellSlugShell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::ShellSlugShell * this_ptr))
} // namespace app::classes::ShellSlugShell
