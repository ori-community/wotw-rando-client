#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderingType__Enum.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberInteractionActor.h>
#include <Modloader/app/structs/UberWaterControl.h>
#include <Modloader/app/structs/UberWaterControl_ImpactBuf.h>
#include <Modloader/app/structs/UberWaterControl_VisualDebugMode__Enum.h>
#include <Modloader/app/structs/UberWaterControl_c_DisplayClass116_0.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberWaterControl {
    IL2CPP_REGISTER_METHOD(0x00B1B670, bool, get_TimelineUpdate, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01293D20, void, set_TimelineUpdate, app::UberWaterControl* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00BEB090, bool, get_IsValid, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01293D30, float, get_SimDt, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01293ED0, float, get_FixedDt, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01293EE0, int64_t, get_WaterControllVersion, )
    IL2CPP_REGISTER_METHOD(0x01293F80, void, set_WaterControllVersion, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01294030, void, IncrementVersion, )
    IL2CPP_REGISTER_METHOD(0x01294130, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x01294280, void, CleanUpList, )
    IL2CPP_REGISTER_METHOD(0x01294500, void, UpdateResolution, app::UberWaterControl* this_ptr, float quality_overide)
    IL2CPP_REGISTER_METHOD(0x012946D0, app::Bounds, UpdateBoundary, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01294840, void, UpdateBoundaryInteraction, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01294B50, app::UberWaterControl_VisualDebugMode__Enum, get_visualDebugMode, )
    IL2CPP_REGISTER_METHOD(0x01294BF0, void, set_visualDebugMode, app::UberWaterControl_VisualDebugMode__Enum value)
    IL2CPP_REGISTER_METHOD(0x01294E20, void, RegisterVisualDebug, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01294F00, void, UnregisterVisualDebug, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01294FB0, void, IDebugRendererSubscriber_RenderDebug, app::UberWaterControl* this_ptr, app::RenderingType__Enum type)
    IL2CPP_REGISTER_METHOD(0x01295600, void, Awake, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01295920, void, OnEnable, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01295EE0, void, OnDisable, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01296090, void, SyncTexture, app::UberWaterControl* this_ptr, app::RenderTexture** tex, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01296540, app::Vector4, WaveOffset, app::UberWaterControl* this_ptr, app::Vector4 speed, app::Vector4 scale)
    IL2CPP_REGISTER_METHOD(0x01296600, void, BindShaderVariables, app::UberWaterControl* this_ptr, app::Material* mat, float sim_dt, float quality)
    IL2CPP_REGISTER_METHOD(0x01296F70, void, UpdateSim, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012979D0, void, SetImpact, app::UberWaterControl* this_ptr, app::Material* mat, float sim_dt, float quality)
    IL2CPP_REGISTER_METHOD(0x01298610, void, Update, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01298610, void, UpdateSafe, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01298700, bool, PointIsInValidZRange, app::UberWaterControl* this_ptr, app::Vector3 point, float tolerance)
    IL2CPP_REGISTER_METHOD(0x01298790, void, Splash, app::UberWaterControl* this_ptr, app::Vector3 pos, float power, app::UberInteractionActor* actor)
    IL2CPP_REGISTER_METHOD(0x01299150, bool, IsOverWater, app::UberWaterControl* this_ptr, app::Vector3 pos)
    IL2CPP_REGISTER_METHOD(
        0x012993D0,
        void,
        Impact,
        app::UberWaterControl* this_ptr,
        app::Vector3 pos,
        float power,
        float radius,
        bool splash,
        int32_t priority,
        bool displacement_impact,
        app::UberInteractionActor* actor
    )
    IL2CPP_REGISTER_METHOD(0x012998A0, void, ImpactLocal, app::UberWaterControl* this_ptr, app::Vector2 local_uv, float power, float radius, int32_t priority)
    IL2CPP_REGISTER_METHOD(
        0x01299A00,
        void,
        ImpactLocalDisplacement,
        app::UberWaterControl* this_ptr,
        app::Vector2 local_uv,
        float power,
        float radius,
        int32_t priority
    )
    IL2CPP_REGISTER_METHOD(
        0x01299B60,
        app::UberWaterControl_ImpactBuf,
        GetBufFromSettings,
        app::UberWaterControl* this_ptr,
        app::Vector2 local_uv,
        float power,
        float radius
    )
    IL2CPP_REGISTER_METHOD(0x01299C70, void, OnDestroy, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01299F80, void, OnRestoreCheckpoint, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129A050, void, BindShaderVariablesToMaterial, app::UberWaterControl* this_ptr, app::Material* mat)
    IL2CPP_REGISTER_METHOD(0x0129AA20, app::UberWaterControl*, GetNearestWaterControl, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x0129AEF0, float, GetDistanceToNearestWaterControlSurface, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IInteractable_RemoveInteraction, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0129B330,
        void,
        IInteractable_SetInteraction,
        app::UberWaterControl* this_ptr,
        float time,
        app::Vector3 position,
        app::Vector3 historic_pos,
        app::Vector4 strength,
        app::Vector3 velocity,
        float radius,
        bool explosion,
        bool force_play,
        app::UberInteractionActor* actor
    )
    IL2CPP_REGISTER_METHOD(
        0x0129B4A0,
        bool,
        IInteractable_DoesOverlap,
        app::UberWaterControl* this_ptr,
        app::Vector3 position,
        app::Vector3 velocity,
        float radius,
        float z_scale
    )
    IL2CPP_REGISTER_METHOD(0x0129B700, app::Vector3, IInteractable_GetPosition, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129B790, app::Vector3, IInteractable_GetExplodePoint, app::UberWaterControl* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00E59840, float, IInteractable_MaxRadius, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IInteractable_IsWater, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IInteractable_OnRegistered, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129B9A0, int32_t, IInteractable_get_Index, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129B9B0, void, IInteractable_set_Index, app::UberWaterControl* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0129B9C0, bool, IInteractable_get_IsRegistered, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129B9D0, void, IInteractable_set_IsRegistered, app::UberWaterControl* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0129B9E0, app::Bounds, get_Bounds, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IEnablingModifier_get_ShouldDisable, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IEnablingModifier_get_ShouldEnable, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IEnablingModifier_get_ShouldChildrenEnable, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, IEnablingModifier_get_ShouldSetMoonReady, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129BE10, void, RegisterOptimizers, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129BF50, void, UnregisterOptimizers, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129C010, bool, UpdateOptimizers, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129C0A0, void, ISceneRootPostEnableObserver_OnSceneRootPostEnable, app::UberWaterControl* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x0129C1A0, void, ISceneRootPreDisableObserver_OnSceneRootPreDisable, app::UberWaterControl* this_ptr, app::SceneRoot* scene_root)
    IL2CPP_REGISTER_METHOD(0x0129C280, app::Bounds, IFrustumOptimizable_get_Bounds, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129C2B0, bool, IFrustumOptimizable_get_InsideFrustum, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129C2C0, void, IFrustumOptimizable_OnFrustumEnter, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129C380, void, IFrustumOptimizable_OnFrustumExit, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129C2C0, void, IFrustumEnabled_OnFrustumInstantEnabled, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00949D10, app::SuspendableMask__Enum, ISuspendable_get_Mask, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129C450, void, ISuspendable_set_Mask, app::UberWaterControl* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00A79450, bool, ISuspendable_get_IsSuspended, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A79460, void, ISuspendable_set_IsSuspended, app::UberWaterControl* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0129C460, void, ctor, app::UberWaterControl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0129C610, void, cctor, )
    IL2CPP_REGISTER_METHOD(
        0x0129C8B0,
        void,
        _SetImpact_g__Dequeue_116_0,
        int32_t buf_name,
        app::UberWaterControl_ImpactBuf buf,
        app::UberWaterControl_c_DisplayClass116_0* param_000163ee
    )
    IL2CPP_REGISTER_METHOD(0x0129C970, void, _SetImpact_g__DequeueEmpty_116_1, int32_t buf_name, app::UberWaterControl_c_DisplayClass116_0* param_000163f0)
    IL2CPP_REGISTER_METHOD(0x015E3770, void, DestroyImmediate_1, app::Object** o)
    IL2CPP_REGISTER_METHOD(0x015E3770, void, DestroyImmediate_2, app::RenderTexture** o)
    IL2CPP_REGISTER_METHOD(0x015E3770, void, DestroyImmediate_3, app::Material** o)
} // namespace app::classes::UberWaterControl
