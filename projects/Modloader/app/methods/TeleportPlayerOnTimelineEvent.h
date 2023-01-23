#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TeleportPlayerOnTimelineEvent.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TeleportPlayerOnTimelineEvent {
    IL2CPP_REGISTER_METHOD(0x00CE8F90, void, OnEnable, (app::TeleportPlayerOnTimelineEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE9140, void, OnDisable, (app::TeleportPlayerOnTimelineEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE92F0, app::Vector3, get_Position, (app::TeleportPlayerOnTimelineEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE94A0, void, OnEvent, (app::TeleportPlayerOnTimelineEvent * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04723EB8, TeleportPlayerOnTimelineEvent_OnEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CE97A0, void, OnDrawGizmos, (app::TeleportPlayerOnTimelineEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TeleportPlayerOnTimelineEvent * this_ptr))
} // namespace app::classes::TeleportPlayerOnTimelineEvent
