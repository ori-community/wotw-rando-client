#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Bubblemaker.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::Bubblemaker {
    IL2CPP_REGISTER_METHOD(0x00654950, app::SuspendableMask__Enum, get_Mask, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00804400, void, set_Mask, (app::Bubblemaker * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x008044B0, void, set_TimelineToPlay, (app::Bubblemaker * this_ptr, app::MoonTimeline* value))
    IL2CPP_REGISTER_METHOD(0x003FD650, bool, get_IsSuspended, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00800850, void, set_IsSuspended, (app::Bubblemaker * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00804590, void, Awake, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008046B0, void, Start, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00804990, void, OnDestroy, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRestoreCheckpoint, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00804B40, void, OnEnable, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00804BE0, void, OnDisable, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00804C80, void, FixedUpdate, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00804E30, void, SpawnBubble, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FB90, Bubblemaker_SpawnBubble__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008052A0, void, OnRaceStart, (app::Bubblemaker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00805380, void, OnSyncRaceTimer, (app::Bubblemaker * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00805420, void, ctor, (app::Bubblemaker * this_ptr))
} // namespace app::classes::Bubblemaker
