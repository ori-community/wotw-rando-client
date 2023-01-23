#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WindupSwitch.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::WindupSwitch {
    IL2CPP_REGISTER_METHOD(0x0057BBF0, bool, CanBeSpiritSlashed, (app::WindupSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BC00, void, OnRecieveDamage, (app::WindupSwitch * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x0057BEE0, void, Update, (app::WindupSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BFC0, void, HandleRotation, (app::WindupSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057C470, void, HandleSwitchLogic, (app::WindupSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057C6B0, void, RegisterAnimator, (app::WindupSwitch * this_ptr, app::BaseAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x0057C750, void, UnregisterAnimator, (app::WindupSwitch * this_ptr, app::BaseAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x0057C7F0, void, DriverFixedUpdate, (app::WindupSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057C8F0, void, Serialize, (app::WindupSwitch * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0057CAB0, float, GetDamageMultiplier, (app::WindupSwitch * this_ptr, app::DamageType__Enum damage_type))
    IL2CPP_REGISTER_METHOD(0x0057CB50, void, ctor, (app::WindupSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::WindupSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::WindupSwitch * this_ptr))
} // namespace app::classes::WindupSwitch
