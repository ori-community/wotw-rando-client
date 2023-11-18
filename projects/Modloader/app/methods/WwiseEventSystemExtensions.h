#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/WwiseEventSystem.h>

namespace app::classes::WwiseEventSystemExtensions {
    IL2CPP_REGISTER_METHOD(0x00593850, app::WwiseEventSystem_SoundHandle, AllocateHandle, (app::WwiseEventSystem * system, app::SoundProvider* sound_provider, app::ISoundHost* host))
    IL2CPP_REGISTER_METHOD(0x00593910, void, FireAndForget, (app::WwiseEventSystem * system, app::SoundProvider* sound_provider, app::ISoundHost* host))
} // namespace app::classes::WwiseEventSystemExtensions
