#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/AttachToRope.h>
#include <Modloader/app/structs/SceneRoot.h>

namespace app::classes::AttachToRope {
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::ConfigurableJoint*, get_GeneratedConfigurableJoint, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084F8B0, bool, IsAttached, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084F950, void, Awake, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084FBF0, void, OnEnable, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084FD40, void, PerformAttachment, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008507D0, void, BreakAttachment, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00850890, void, Start, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008509A0, void, RemoveAllJoints, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00850A90, void, OnDestroy, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00850D40, void, OnGameSerializeLoad, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794CE0, AttachToRope_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00850D90, void, OnSceneStartLateAfterSerialize, (app::AttachToRope * this_ptr, app::SceneRoot* root))
    IL2CPP_REGISTER_METHODINFO(0x04740748, AttachToRope_OnSceneStartLateAfterSerialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00850D40, void, OnSerializationLoad, (app::AttachToRope * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00850F10, void, ctor, (app::AttachToRope * this_ptr))
} // namespace app::classes::AttachToRope
