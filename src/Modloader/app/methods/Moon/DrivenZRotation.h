#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DrivenZRotation.h>
#include <Modloader/app/structs/ITweenLerpInputProvider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::DrivenZRotation {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_ShouldUpdate, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_ShouldUpdate, app::DrivenZRotation* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9280, app::ITweenLerpInputProvider*, get_ResolvedInputProvider, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9340, app::Transform*, get_EffectiveTranform, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9440, float, get_ResolvedInitialRotation, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9540, float, get_ResolvedEndRotation, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9640, void, Awake, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9740, void, OnEnable, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA97E0, void, OnDisable, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9640, void, Init, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9880, bool, UpdateTweenValue, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9980, float, EvaluateRotZ, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9B00, void, UpdateTarget, app::DrivenZRotation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BA9ED0, void, OnUpdate, app::DrivenZRotation* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x01BA9EE0, void, ctor, app::DrivenZRotation* this_ptr)
} // namespace app::classes::Moon::DrivenZRotation
