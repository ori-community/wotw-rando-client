#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Wwise::WwiseEventSystemExtensions {
    IL2CPP_REGISTER_METHOD(0x02715230, app::WwiseEventSystem_SoundHandle, AllocateHandle, (app::WwiseEventSystem * system, uint32_t wise_event_id, app::ISoundHost * host))
}
