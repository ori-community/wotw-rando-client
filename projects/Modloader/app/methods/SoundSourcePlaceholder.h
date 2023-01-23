#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SoundSourcePlaceholder.h>

namespace app::classes::SoundSourcePlaceholder {
    IL2CPP_REGISTER_METHOD(0x00EEDD80, void, Awake, (app::SoundSourcePlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SoundSourcePlaceholder * this_ptr))
} // namespace app::classes::SoundSourcePlaceholder
