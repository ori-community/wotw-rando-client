#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SurfaceBasedSoundProvider.h>

namespace app::classes::SurfaceBasedSoundProvider {
    IL2CPP_REGISTER_METHOD(0x00672890, app::SoundDescriptor*, GetSound, (app::SurfaceBasedSoundProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x006729B0, void, ctor, (app::SurfaceBasedSoundProvider * this_ptr))
} // namespace app::classes::SurfaceBasedSoundProvider
