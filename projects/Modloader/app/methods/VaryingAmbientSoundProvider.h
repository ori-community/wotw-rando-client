#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::VaryingAmbientSoundProvider {
    IL2CPP_REGISTER_METHOD(0x013BA000, uint32_t, get_GuidHash, (app::VaryingAmbientSoundProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013BA040, app::SoundDescriptor*, GetSound, (app::VaryingAmbientSoundProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013BA2A0, void, ctor, (app::VaryingAmbientSoundProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013BA360, void, cctor, ())
} // namespace app::classes::VaryingAmbientSoundProvider
