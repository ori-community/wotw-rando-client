#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EnvrionmentBasedSoundProvider {
    IL2CPP_REGISTER_METHOD(0x00CAADD0, app::SoundDescriptor*, GetSound, (app::EnvrionmentBasedSoundProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CAAEF0, void, ctor, (app::EnvrionmentBasedSoundProvider * this_ptr))
} // namespace app::classes::EnvrionmentBasedSoundProvider
