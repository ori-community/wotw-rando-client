#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/FrustumOptimizable.h>

namespace app::classes::FrustumOptimizable {
    IL2CPP_REGISTER_METHOD(0x0164A810, void, OnFrustumEnter, app::FrustumOptimizable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0164A820, void, OnFrustumExit, app::FrustumOptimizable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_InsideFrustum, app::FrustumOptimizable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0164A830, app::Bounds, get_Bounds, app::FrustumOptimizable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::FrustumOptimizable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FrustumOptimizable* this_ptr)
} // namespace app::classes::FrustumOptimizable
