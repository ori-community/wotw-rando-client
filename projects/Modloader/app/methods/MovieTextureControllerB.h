#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MovieTextureControllerB {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086ACD0, void, Start, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086ADB0, void, Play, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086B1C0, void, Pause, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086B420, void, Resume, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMainTexture, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086B540, void, Stop, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086B890, app::IEnumerator*, DestroyRoutine, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086B9E0, void, HideDimmer, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086BA60, void, ShowDimmer, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086BAE0, bool, IsPlaying, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086BC20, void, FixedUpdate, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086C210, void, Update, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00653F90, bool, IsFinished, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0086C3F0, void, ctor, (app::MovieTextureControllerB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::MovieTextureControllerB
