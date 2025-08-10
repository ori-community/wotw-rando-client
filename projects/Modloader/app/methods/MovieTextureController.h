#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MovieTextureController.h>

namespace app::classes::MovieTextureController {
    IL2CPP_REGISTER_METHOD(0x00869A60, void, StartMovieSequence, app::MovieTextureController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00869DD0, void, FixedUpdate, app::MovieTextureController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086A200, void, OnFadeInEvent, app::MovieTextureController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086A5D0, void, OnFadeOutEvent, app::MovieTextureController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086A8B0, void, OnFadeInAfterMovieEvent, app::MovieTextureController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086AAB0, void, OnFadeOutAfterMovieEvent, app::MovieTextureController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0086AC90, void, ctor, app::MovieTextureController* this_ptr)
} // namespace app::classes::MovieTextureController
