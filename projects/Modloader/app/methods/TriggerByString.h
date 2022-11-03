#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriggerByString {
    IL2CPP_REGISTER_METHOD(0x00B12B40, void, Register, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x00B12C00, void, Deregister, (app::String * s))
    IL2CPP_REGISTER_METHOD(0x00B12CC0, void, Awake, (app::TriggerByString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B12EF0, void, Start, (app::TriggerByString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B12FF0, void, OnGameReset, ())
    IL2CPP_REGISTER_METHOD(0x00B130D0, void, FixedUpdate, (app::TriggerByString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B131D0, void, DoTrigger, (app::TriggerByString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B13370, void, SerializeStringTriggers, (app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x00B137D0, void, OnDestroy, (app::TriggerByString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B13990, void, OnSceneRootEnabledAfterSerialize, (app::TriggerByString * this_ptr, app::SceneRoot* scene_root))
    IL2CPP_REGISTER_METHODINFO(0x047734E0, TriggerByString_OnSceneRootEnabledAfterSerialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, (app::TriggerByString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B13BC0, void, cctor, ())
} // namespace app::classes::TriggerByString
