#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CameraController_1.h>
#include <Modloader/app/structs/CameraFrustumOptimizer.h>
#include <Modloader/app/structs/CameraFrustumOptimizer_IntersectionResult__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IFrustumEnabled.h>
#include <Modloader/app/structs/IFrustumOptimizable.h>
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/RenderingType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CameraFrustumOptimizer {
    IL2CPP_REGISTER_METHOD(0x0168A060, void, RegisterVisualDebug, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168A110, void, UnregisterVisualDebug, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168A1C0, void, RenderDebug, app::CameraFrustumOptimizer* this_ptr, app::RenderingType__Enum rendering_type)
    IL2CPP_REGISTER_METHOD(0x0052A070, bool, get_EnableDebug, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168A640, void, set_EnableDebug, app::CameraFrustumOptimizer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0168A790, app::Bounds, GetExtendedBounds, app::IFrustumOptimizable* o, float expansion_amount)
    IL2CPP_REGISTER_METHOD(0x0168A8F0, int32_t, get_OptimizableCount, )
    IL2CPP_REGISTER_METHOD(0x0168A9D0, void, Register, app::IFrustumOptimizable* frustum_optimizable)
    IL2CPP_REGISTER_METHOD(0x0168AC70, void, Unregister, app::IFrustumOptimizable* frustum_optimizable)
    IL2CPP_REGISTER_METHOD(0x0168ADD0, void, RegisterUninitialized, app::IFrustumOptimizable* frustum_optimizable)
    IL2CPP_REGISTER_METHOD(0x0168AE90, void, UnregisterUninitialized, app::IFrustumOptimizable* frustum_optimizable)
    IL2CPP_REGISTER_METHOD(0x0168AF70, void, RegisterInstantEnabledOptimizable, app::IFrustumEnabled* enabled)
    IL2CPP_REGISTER_METHOD(0x0168B030, void, RegisterEarlyZ, app::MeshRenderer* renderer, int32_t frame_delay)
    IL2CPP_REGISTER_METHOD(0x0168B180, void, UnhideEarlyZObjects, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168B5D0, bool, PrintOptimizables, )
    IL2CPP_REGISTER_METHOD(0x0168C1B0, bool, get_UseBatchedFrustumChecks, )
    IL2CPP_REGISTER_METHOD(0x0168C250, void, set_UseBatchedFrustumChecks, bool value)
    IL2CPP_REGISTER_METHOD(0x0168C300, bool, get_DeferActivations, )
    IL2CPP_REGISTER_METHOD(0x0168C3A0, void, set_DeferActivations, bool value)
    IL2CPP_REGISTER_METHOD(0x0168C450, bool, get_UseBoundsCache, )
    IL2CPP_REGISTER_METHOD(0x0168C4F0, void, set_UseBoundsCache, bool value)
    IL2CPP_REGISTER_METHOD(0x0168C5A0, bool, get_VerifyCacheCorrectness, )
    IL2CPP_REGISTER_METHOD(0x0168C640, void, set_VerifyCacheCorrectness, bool value)
    IL2CPP_REGISTER_METHOD(0x0168C6F0, app::Vector3, get_LastCameraTestPosition, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168C710, void, SetMoonOptimized_1, app::GameObject* go, bool ready)
    IL2CPP_REGISTER_METHOD(0x0168C830, void, SetMoonOptimized_2, app::GameObject* go, app::Renderer__Array* renderers, bool ready)
    IL2CPP_REGISTER_METHOD(0x0168C920, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_Enabled, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168CB60, void, set_Enabled, app::CameraFrustumOptimizer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0168CD00, void, Awake, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168D160, void, OnDestroy, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168D3A0, void, OnAspectChanged, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168D3B0, void, Start, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168D550, void, DoDeferredActivations, app::CameraFrustumOptimizer* this_ptr, bool all)
    IL2CPP_REGISTER_METHOD(0x0168DD60, void, FixedUpdate, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168E040, float, get_ExpansionAmount, )
    IL2CPP_REGISTER_METHOD(0x0168E0F0, void, ForceInstantUpdate, )
    IL2CPP_REGISTER_METHOD(0x0168E260, void, RequestFullUpdate, )
    IL2CPP_REGISTER_METHOD(0x0168E330, void, UpdateInstantEnabledOptimizables, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168E6B0, void, UpdateFrustrumOptimizables_1, app::CameraFrustumOptimizer* this_ptr, bool instant)
    IL2CPP_REGISTER_METHOD(0x0168E7B0, void, UpdateFrustrumOptimizables_2, app::CameraFrustumOptimizer* this_ptr, bool multi_cam, bool instant, bool forced)
    IL2CPP_REGISTER_METHOD(0x0168F6E0, void, ForceUpdateOnDisableFrustrumOptimizables, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168F7D0, bool, IsNull, app::CameraFrustumOptimizer* this_ptr, app::IFrustumOptimizable* o)
    IL2CPP_REGISTER_METHOD(0x0168F8B0, bool, IsInsideFrustum, app::CameraFrustumOptimizer* this_ptr, app::Bounds bounds)
    IL2CPP_REGISTER_METHOD(0x0168FA40, bool, IsInsideFrustumSingleCam, app::CameraFrustumOptimizer* this_ptr, app::CameraController_1* cam, app::Bounds bounds)
    IL2CPP_REGISTER_METHOD(
        0x0168FAD0,
        app::CameraFrustumOptimizer_IntersectionResult__Enum,
        ProcessFrustumOptimizable_1,
        app::CameraFrustumOptimizer* this_ptr,
        app::IFrustumOptimizable* o,
        uint8_t inside,
        bool is_first_time,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x0168FAF0,
        app::CameraFrustumOptimizer_IntersectionResult__Enum,
        ProcessFrustumOptimizable_2,
        app::CameraFrustumOptimizer* this_ptr,
        app::IFrustumOptimizable* o,
        app::Bounds bounds,
        app::CameraController_1* camera_controller,
        bool is_first_time,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x0168FBD0,
        app::CameraFrustumOptimizer_IntersectionResult__Enum,
        ProcessFrustumOptimizableMultiCam,
        app::CameraFrustumOptimizer* this_ptr,
        app::IFrustumOptimizable* o,
        app::Bounds bounds,
        bool is_first_time,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(
        0x0168FC50,
        app::CameraFrustumOptimizer_IntersectionResult__Enum,
        HandleIntersectionResults,
        app::CameraFrustumOptimizer* this_ptr,
        app::IFrustumOptimizable* o,
        bool inside,
        bool is_first_time,
        bool instant
    )
    IL2CPP_REGISTER_METHOD(0x0168D3A0, void, EnableOptimization, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0168FE90, void, DisableOptimization, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01690010, void, OnDrawGizmos, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016904E0, bool, InsideFrustrum, app::Bounds bounds)
    IL2CPP_REGISTER_METHOD(0x00AB5740, void, ctor, app::CameraFrustumOptimizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01690680, void, cctor, )
} // namespace app::classes::CameraFrustumOptimizer
