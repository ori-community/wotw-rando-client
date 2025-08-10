#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/MoonRenderContext.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberWaterReflectionPlane.h>
#include <Modloader/app/structs/UberWaterReflectionView.h>
#include <Modloader/app/structs/UberWaterReflectionView_AutomaticGroup.h>
#include <Modloader/app/structs/UberWaterReflectionView_Group.h>
#include <Modloader/app/structs/UberWaterReflectionView_ViewCamInfo.h>
#include <Modloader/app/structs/UberWaterReflectionView_c_DisplayClass21_0.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberWaterReflectionView {
    IL2CPP_REGISTER_METHOD(
        0x012A1690,
        app::UberWaterReflectionView_AutomaticGroup*,
        FindAutomaticGroup,
        app::UberWaterReflectionView* this_ptr,
        app::UberWaterReflectionPlane* plane,
        bool is_game_view
    )
    IL2CPP_REGISTER_METHOD(0x012A1C20, void, ClearVisibleAutomaticGroups, app::UberWaterReflectionView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012A1CD0, void, AddToVisibleList, app::UberWaterReflectionView* this_ptr, app::UberWaterReflectionPlane* plane)
    IL2CPP_REGISTER_METHOD(0x012A2080, void, OnPostCull, app::UberWaterReflectionView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012A23E0, void, ListRenderedGroups, app::UberWaterReflectionView* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x012A2540, void, ListRenderedGroupsInternal, app::UberWaterReflectionView* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x012A34D0, void, RecycleStaleTextures, app::UberWaterReflectionView* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x012A3790, void, DestroySurplusTextures, app::UberWaterReflectionView* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x012A38A0, void, AcquireTextures, app::UberWaterReflectionView* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x012A3B40, void, AcquireTexture, app::UberWaterReflectionView* this_ptr, app::UberWaterReflectionView_Group* group)
    IL2CPP_REGISTER_METHOD(
        0x012A3F40,
        void,
        Prepare,
        app::UberWaterReflectionView* this_ptr,
        app::UberWaterReflectionView_ViewCamInfo* view_info,
        app::UberWaterReflectionPlane* plane
    )
    IL2CPP_REGISTER_METHOD(0x012A4860, void, PrepareAll, app::UberWaterReflectionView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012A4AA0, void, Render_1, app::UberWaterReflectionView* this_ptr, float current_d_r_s_scale, float current_d_r_s_scale_y)
    IL2CPP_REGISTER_METHOD(0x012A5140, void, InitResources, )
    IL2CPP_REGISTER_METHOD(0x012A51E0, void, InitCamera, )
    IL2CPP_REGISTER_METHOD(0x012A5420, void, SetupCameraLight, app::UberWaterReflectionView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012A5870, void, SetupCamera, app::UberWaterReflectionView* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x012A5FA0,
        void,
        Render_2,
        app::UberWaterReflectionView* this_ptr,
        app::UberWaterReflectionView_ViewCamInfo* view_info,
        app::UberWaterReflectionPlane* plane,
        app::RenderTexture* texture,
        float current_d_r_s_scale,
        float current_d_r_s_scale_y
    )
    IL2CPP_REGISTER_METHOD(0x012A6ED0, void, InitBlur, )
    IL2CPP_REGISTER_METHOD(
        0x012A7100,
        void,
        Blur,
        app::UberWaterReflectionView* this_ptr,
        app::MoonRenderContext* ctx,
        app::RenderTexture* texture,
        float blur_size,
        app::Rect viewport
    )
    IL2CPP_REGISTER_METHOD(0x012A7740, void, CleanupBlur, app::UberWaterReflectionView* this_ptr, app::MoonRenderContext* ctx)
    IL2CPP_REGISTER_METHOD(
        0x012A7860,
        void,
        LogEvent_1,
        app::UberWaterReflectionView* this_ptr,
        app::String* message,
        app::UberWaterReflectionView_Group* context
    )
    IL2CPP_REGISTER_METHOD(0x012A7950, void, LogEvent_2, app::UberWaterReflectionView* this_ptr, app::String* message, app::Component_1* context)
    IL2CPP_REGISTER_METHOD(0x012A7860, void, Log_1, app::UberWaterReflectionView* this_ptr, app::String* message, app::UberWaterReflectionView_Group* context)
    IL2CPP_REGISTER_METHOD(0x012A7960, void, Log_2, app::UberWaterReflectionView* this_ptr, app::String* message, app::Component_1* context)
    IL2CPP_REGISTER_METHOD(0x00DBCEE0, float, Sgn, float a)
    IL2CPP_REGISTER_METHOD(0x012A7AC0, app::Vector4, CameraSpacePlane, app::Matrix4x4 view_matrix, app::Vector3 pos, app::Vector3 normal, float side_sign)
    IL2CPP_REGISTER_METHOD(0x012A7ED0, void, CalculateObliqueMatrix, app::Matrix4x4* projection, app::Vector4 clip_plane)
    IL2CPP_REGISTER_METHOD(0x012A8490, app::Matrix4x4, CalculateReflectionMatrix, app::Vector4 plane)
    IL2CPP_REGISTER_METHOD(0x012A8690, void, ctor, app::UberWaterReflectionView* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012A8DC0, void, cctor, )
    IL2CPP_REGISTER_METHOD(
        0x012A8EE0,
        int32_t,
        _ListRenderedGroupsInternal_g__GetFrameDelta_21_0,
        app::UberWaterReflectionView_Group* group,
        app::UberWaterReflectionView_c_DisplayClass21_0* param_00016427
    )
} // namespace app::classes::UberWaterReflectionView
