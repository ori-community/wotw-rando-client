#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DisableRendererWhenOutOfFrustrum {
    IL2CPP_REGISTER_METHOD(0x00B986E0, void, OnFrustumEnter, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B987A0, void, OnFrustumExit, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_InsideFrustum, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98860, app::Bounds, get_Bounds, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B98880, void, Awake, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B989D0, void, OnDestroy, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::DisableRendererWhenOutOfFrustrum * this_ptr))
} // namespace app::classes::DisableRendererWhenOutOfFrustrum
