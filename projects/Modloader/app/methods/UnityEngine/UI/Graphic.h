#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/CanvasRenderer.h>
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/List_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UnityAction.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/VertexHelper.h>

namespace app::classes::UnityEngine::UI::Graphic {
    IL2CPP_REGISTER_METHOD(0x024AE070, void, ctor, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AE200, app::Material*, get_defaultGraphicMaterial, )
    IL2CPP_REGISTER_METHOD(0x024AE370, app::Color, get_color, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AE380, void, set_color, app::Graphic* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x01F1C1B0, bool, get_raycastTarget, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_raycastTarget, app::Graphic* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024AE410, bool, get_useLegacyMeshGeneration, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_useLegacyMeshGeneration, app::Graphic* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024AE420, void, SetAllDirty, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AE470, void, SetLayoutDirty, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AE550, void, SetVerticesDirty, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AE620, void, SetMaterialDirty, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AE6F0, void, OnRectTransformDimensionsChange, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AE880, void, OnBeforeTransformParentChanged, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AE970, void, OnTransformParentChanged, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AEA60, int32_t, get_depth, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AEAD0, app::RectTransform*, get_rectTransform, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AEB60, app::Canvas*, get_canvas, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AEC20, void, CacheCanvas, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AEE50, app::CanvasRenderer*, get_canvasRenderer, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AEEE0, app::Material*, get_defaultMaterial, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AEF70, app::Material*, get_material, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AF040, void, set_material, app::Graphic* this_ptr, app::Material* value)
    IL2CPP_REGISTER_METHOD(0x024AF110, app::Material*, get_materialForRendering, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AF350, app::Texture*, get_mainTexture, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AF3F0, void, OnEnable, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AF5A0, void, OnDisable, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AF750, void, OnCanvasHierarchyChanged, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AF8B0, void, OnCullingChanged, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AF9C0, void, Rebuild, app::Graphic* this_ptr, app::CanvasUpdate__Enum update)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AFA80, void, UpdateMaterial, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AFB90, void, UpdateGeometry, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AFBC0, void, DoMeshGeneration, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B0010, void, DoLegacyMeshGeneration, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B0440, app::Mesh*, get_workerMesh, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnFillVBO, app::Graphic* this_ptr, app::List_1_UnityEngine_UIVertex_* vbo)
    IL2CPP_REGISTER_METHOD(0x024B06E0, void, OnPopulateMesh_1, app::Graphic* this_ptr, app::Mesh* m)
    IL2CPP_REGISTER_METHOD(0x024B07D0, void, OnPopulateMesh_2, app::Graphic* this_ptr, app::VertexHelper* vh)
    IL2CPP_REGISTER_METHOD(0x02355F40, void, OnDidApplyAnimationProperties, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetNativeSize, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B09F0, bool, Raycast, app::Graphic* this_ptr, app::Vector2 sp, app::Camera* event_camera)
    IL2CPP_REGISTER_METHOD(0x024B0D90, app::Vector2, PixelAdjustPoint, app::Graphic* this_ptr, app::Vector2 point)
    IL2CPP_REGISTER_METHOD(0x024B1090, app::Rect, GetPixelAdjustedRect, app::Graphic* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024B13F0,
        void,
        CrossFadeColor_1,
        app::Graphic* this_ptr,
        app::Color target_color,
        float duration,
        bool ignore_time_scale,
        bool use_alpha
    )
    IL2CPP_REGISTER_METHOD(
        0x024B1430,
        void,
        CrossFadeColor_2,
        app::Graphic* this_ptr,
        app::Color target_color,
        float duration,
        bool ignore_time_scale,
        bool use_alpha,
        bool use_r_g_b
    )
    IL2CPP_REGISTER_METHOD(0x024B1820, app::Color, CreateColorFromAlpha, float alpha)
    IL2CPP_REGISTER_METHOD(0x024B1850, void, CrossFadeAlpha, app::Graphic* this_ptr, float alpha, float duration, bool ignore_time_scale)
    IL2CPP_REGISTER_METHOD(0x024B1970, void, RegisterDirtyLayoutCallback, app::Graphic* this_ptr, app::UnityAction* action)
    IL2CPP_REGISTER_METHOD(0x024B1A30, void, UnregisterDirtyLayoutCallback, app::Graphic* this_ptr, app::UnityAction* action)
    IL2CPP_REGISTER_METHOD(0x024B1AF0, void, RegisterDirtyVerticesCallback, app::Graphic* this_ptr, app::UnityAction* action)
    IL2CPP_REGISTER_METHOD(0x024B1BB0, void, UnregisterDirtyVerticesCallback, app::Graphic* this_ptr, app::UnityAction* action)
    IL2CPP_REGISTER_METHOD(0x024B1C70, void, RegisterDirtyMaterialCallback, app::Graphic* this_ptr, app::UnityAction* action)
    IL2CPP_REGISTER_METHOD(0x024B1D30, void, UnregisterDirtyMaterialCallback, app::Graphic* this_ptr, app::UnityAction* action)
    IL2CPP_REGISTER_METHOD(0x024B1DF0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, ICanvasElement_get_transform, app::Graphic* this_ptr)
} // namespace app::classes::UnityEngine::UI::Graphic
