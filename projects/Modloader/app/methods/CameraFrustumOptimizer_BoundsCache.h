#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFrustumOptimizer_BoundsCache__Boxed.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/IFrustumOptimizable.h>
#include <Modloader/app/structs/List_1_IFrustumOptimizable_.h>

namespace app::classes::CameraFrustumOptimizer_BoundsCache {
    IL2CPP_REGISTER_METHOD(0x0013B9E0, void, Init, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013B9F0, void, Reset, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BA00, void, Dispose, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0013BA10, void, AddBounds, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr, app::IFrustumOptimizable* o, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x0013BA40, int32_t, PrefetchAllBounds, (app::CameraFrustumOptimizer_BoundsCache__Boxed * this_ptr, app::List_1_IFrustumOptimizable_* list_to_pre_fetch))
} // namespace app::classes::CameraFrustumOptimizer_BoundsCache
