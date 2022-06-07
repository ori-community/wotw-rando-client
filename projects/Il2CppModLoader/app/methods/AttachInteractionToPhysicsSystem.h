#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AttachInteractionToPhysicsSystem {
    IL2CPP_REGISTER_METHOD(0x00846810, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0063D070, bool, get_IsSuspended, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063D080, void, set_IsSuspended, (app::AttachInteractionToPhysicsSystem * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008468B0, app::SuspendableMask__Enum, get_Mask, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008468C0, void, set_Mask, (app::AttachInteractionToPhysicsSystem * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Transform *, get_ConnectedTransform1, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::Transform *, get_ConnectedTransform2, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008468D0, bool, IsAttached, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00846970, void, PerformAttachment, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnGameSerializeLoad, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSceneStartLateAfterSerialize, (app::AttachInteractionToPhysicsSystem * this_ptr, app::SceneRoot * root))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSerializationLoad, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00847180, float, Remap, (app::AttachInteractionToPhysicsSystem * this_ptr, app::Rect remap, float input))
    IL2CPP_REGISTER_METHOD(0x00847250, void, OnUpdatePhysics, (app::AttachInteractionToPhysicsSystem * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00847BD0, void, ctor, (app::AttachInteractionToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
