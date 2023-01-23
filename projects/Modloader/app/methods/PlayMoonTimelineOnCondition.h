#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayMoonTimelineOnCondition.h>

namespace app::classes::PlayMoonTimelineOnCondition {
    IL2CPP_REGISTER_METHOD(0x0117A020, app::MoonTimeline*, get_CachedTimeline, (app::PlayMoonTimelineOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A120, void, FixedUpdate, (app::PlayMoonTimelineOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A130, void, CheckToPlay, (app::PlayMoonTimelineOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A120, void, OnDisable, (app::PlayMoonTimelineOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A2A0, void, Awake, (app::PlayMoonTimelineOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A440, void, OnDestroy, (app::PlayMoonTimelineOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A5E0, void, OnRestoreCheckpoint, (app::PlayMoonTimelineOnCondition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794468, PlayMoonTimelineOnCondition_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0117A630, void, OnSkipCutscene, (app::PlayMoonTimelineOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayMoonTimelineOnCondition * this_ptr))
} // namespace app::classes::PlayMoonTimelineOnCondition
