#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SoundProvider.h>

namespace app::classes::SoundProvider {
    IL2CPP_REGISTER_METHOD(0x00EECA10, void, ctor, (app::SoundProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EECB60, void, cctor, ())
} // namespace app::classes::SoundProvider
