#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFrustumOptimizer_BoundsCache {
    IL2CPP_REGISTER_METHOD(0x0013B9E0, void, Init, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013B9F0, void, Reset, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BA00, void, Dispose, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BA10, void, AddBounds, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr, app::IFrustumOptimizable * o, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x0013BA40, int32_t, PrefetchAllBounds, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr, app::List_1_IFrustumOptimizable_ * list_to_pre_fetch))
}
