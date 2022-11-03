#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AttachSpriteToPhysicsSystem {
    IL2CPP_REGISTER_METHOD(0x008495E0, void, InitTransform, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, ISuspendable_get_IsSuspended, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008496A0, void, ISuspendable_set_IsSuspended, (app::AttachSpriteToPhysicsSystem * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FBE90, app::SuspendableMask__Enum, ISuspendable_get_Mask, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FBEA0, void, ISuspendable_set_Mask, (app::AttachSpriteToPhysicsSystem * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x008496B0, void, Awake, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, IRecordableTransform_get_TrackTranformChangesForRecording, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::TrackingExclusions, IRecordableTransform_get_TrackingExclusions, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::RecordableParsingGroup__Enum, IRecordable_get_ParsingGroup, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00849850, bool, IPhysicsUpdateHandlerValidable_get_IsValid, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008498F0, void, IPhysicsUpdateHandler_OnUpdatePhysics, (app::AttachSpriteToPhysicsSystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHODINFO(0x0472BAE8, AttachSpriteToPhysicsSystem_Moon_IPhysicsUpdateHandler_OnUpdatePhysics__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00849950, void, UpdateFromMainThread, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084ACA0, void, PrepareJob, (app::AttachSpriteToPhysicsSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084ADF0, void, UpdateFromJob, (app::AttachSpriteToPhysicsSystem * this_ptr, app::TransformAccess transform))
    IL2CPP_REGISTER_METHOD(0x0084C030, void, ctor, (app::AttachSpriteToPhysicsSystem * this_ptr))
} // namespace app::classes::AttachSpriteToPhysicsSystem
