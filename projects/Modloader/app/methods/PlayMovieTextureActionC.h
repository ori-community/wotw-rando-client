#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayMovieTextureActionC {
    IL2CPP_REGISTER_METHOD(0x005D2E60, void, OnDestroy, (app::PlayMovieTextureActionC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A660, void, Stop, (app::PlayMovieTextureActionC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A730, bool, get_IsPerforming, (app::PlayMovieTextureActionC * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117A800, void, Perform, (app::PlayMovieTextureActionC * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0117A990, void, ctor, (app::PlayMovieTextureActionC * this_ptr))
} // namespace app::classes::PlayMovieTextureActionC
