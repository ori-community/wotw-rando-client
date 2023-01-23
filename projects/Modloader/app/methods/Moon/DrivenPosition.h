#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/DrivenPosition.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/ITweenLerpInputProvider.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::Moon::DrivenPosition {
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA8340, app::Transform*, get_EffectiveTranform, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA8440, app::ITweenLerpInputProvider*, get_ResolvedInputProvider, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA8500, app::Vector3, get_ResolvedInitialPosition, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA8660, app::Vector3, get_ResolvedEndPosition, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA87D0, void, OnEnable, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA8870, void, OnDisable, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Awake, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA8910, void, OnDrawGizmos, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_ShouldUpdate, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_ShouldUpdate, (app::DrivenPosition * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01BA8DA0, void, OnUpdate, (app::DrivenPosition * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01BA9040, app::GameObject*, GetDynamicGraphicTarget, (app::DrivenPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BA9130, void, ctor, (app::DrivenPosition * this_ptr))
} // namespace app::classes::Moon::DrivenPosition
