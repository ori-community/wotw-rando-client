#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SuspendWhenOutOfFrustrum {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldDisable, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldEnable, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ShouldChildrenEnable, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSetMoonReady, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006745A0, void, OnDrawGizmosSelected, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674660, void, Prewarm, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674730, void, OnFrustumEnter, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674750, void, OnFrustumExit, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674770, void, Suspend, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674970, void, Resume, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_InsideFrustum, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674B80, app::Bounds, get_Bounds, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615270, bool, get_CanSuspendResume, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00674DC0, void, set_CanSuspendResume, (app::SuspendWhenOutOfFrustrum * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00674DD0, void, Awake, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675000, void, OnDestroy, (app::SuspendWhenOutOfFrustrum * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006750A0, void, ctor, (app::SuspendWhenOutOfFrustrum * this_ptr))
} // namespace app::classes::SuspendWhenOutOfFrustrum
