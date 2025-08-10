#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FadingSound.h>

namespace app::classes::FadingSound {
    IL2CPP_REGISTER_METHOD(0x00994270, void, Start, app::FadingSound* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009943B0, void, ChangeVolume, app::FadingSound* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::FadingSound* this_ptr)
} // namespace app::classes::FadingSound
