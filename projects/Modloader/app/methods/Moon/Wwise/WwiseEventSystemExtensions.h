#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#include <Modloader/app/structs/WwiseEventSystem.h>
#include <Modloader/app/structs/ISoundHost.h>

namespace app::classes::Moon::Wwise::WwiseEventSystemExtensions {
    IL2CPP_REGISTER_METHOD(0x02715230, app::WwiseEventSystem_SoundHandle, AllocateHandle, (app::WwiseEventSystem * system, uint32_t wise_event_id, app::ISoundHost* host))
}
