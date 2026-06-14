#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StormZone_SoundSource.h>

namespace app::classes::StormZone_SoundSource {
    IL2CPP_REGISTER_METHOD(0x0065D290, void, FadeIn, app::StormZone_SoundSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065D2C0, void, FadeOut, app::StormZone_SoundSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065D2F0, void, Update, app::StormZone_SoundSource* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065D3E0, void, ctor, app::StormZone_SoundSource* this_ptr)
} // namespace app::classes::StormZone_SoundSource
