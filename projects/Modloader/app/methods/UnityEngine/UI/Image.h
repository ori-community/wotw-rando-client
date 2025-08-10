#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/Image.h>
#include <Modloader/app/structs/Image_FillMethod__Enum.h>
#include <Modloader/app/structs/Image_Type__Enum.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/SpriteAtlas.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/VertexHelper.h>

namespace app::classes::UnityEngine::UI::Image {
    IL2CPP_REGISTER_METHOD(0x024B7660, void, ctor, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B76C0, app::Sprite*, get_sprite, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B76D0, void, set_sprite, app::Image* this_ptr, app::Sprite* value)
    IL2CPP_REGISTER_METHOD(0x024B77A0, app::Sprite*, get_overrideSprite, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B77B0, void, set_overrideSprite, app::Image* this_ptr, app::Sprite* value)
    IL2CPP_REGISTER_METHOD(0x024B7880, app::Sprite*, get_activeSprite, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7950, app::Image_Type__Enum, get_type, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7960, void, set_type, app::Image* this_ptr, app::Image_Type__Enum value)
    IL2CPP_REGISTER_METHOD(0x024B7A10, bool, get_preserveAspect, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7A20, void, set_preserveAspect, app::Image* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024B7B00, bool, get_fillCenter, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7B10, void, set_fillCenter, app::Image* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024B7BF0, app::Image_FillMethod__Enum, get_fillMethod, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7C00, void, set_fillMethod, app::Image* this_ptr, app::Image_FillMethod__Enum value)
    IL2CPP_REGISTER_METHOD(0x024B7CC0, float, get_fillAmount, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7CD0, void, set_fillAmount, app::Image* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x024B7DF0, bool, get_fillClockwise, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7E00, void, set_fillClockwise, app::Image* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024B7EE0, int32_t, get_fillOrigin, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7EF0, void, set_fillOrigin, app::Image* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024B7FD0, float, get_eventAlphaThreshold, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B7FF0, void, set_eventAlphaThreshold, app::Image* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x024B8010, float, get_alphaHitTestMinimumThreshold, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010947B0, void, set_alphaHitTestMinimumThreshold, app::Image* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x024B8020, bool, get_useSpriteMesh, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B8030, void, set_useSpriteMesh, app::Image* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024B8110, app::Material*, get_defaultETC1GraphicMaterial, )
    IL2CPP_REGISTER_METHOD(0x024B8280, app::Texture*, get_mainTexture, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B84B0, bool, get_hasBorder, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B8600, float, get_pixelsPerUnit, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B87E0, app::Material*, get_material, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024AF040, void, set_material, app::Image* this_ptr, app::Material* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B8B30, void, OnAfterDeserialize, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B8C40, void, PreserveSpriteAspectRatio, app::Image* this_ptr, app::Rect* rect, app::Vector2 sprite_size)
    IL2CPP_REGISTER_METHOD(0x024B8D40, app::Vector4, GetDrawingDimensions, app::Image* this_ptr, bool should_preserve_aspect)
    IL2CPP_REGISTER_METHOD(0x024B9210, void, SetNativeSize, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B9520, void, OnPopulateMesh, app::Image* this_ptr, app::VertexHelper* to_fill)
    IL2CPP_REGISTER_METHOD(0x024B9860, void, TrackSprite, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B99E0, void, OnEnable, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B9A00, void, OnDisable, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B9B60, void, UpdateMaterial, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024B9E40, void, GenerateSimpleSprite, app::Image* this_ptr, app::VertexHelper* vh, bool l_preserve_aspect)
    IL2CPP_REGISTER_METHOD(0x024BA1D0, void, GenerateSprite, app::Image* this_ptr, app::VertexHelper* vh, bool l_preserve_aspect)
    IL2CPP_REGISTER_METHOD(0x024BA940, void, GenerateSlicedSprite, app::Image* this_ptr, app::VertexHelper* to_fill)
    IL2CPP_REGISTER_METHOD(0x024BB540, void, GenerateTiledSprite, app::Image* this_ptr, app::VertexHelper* to_fill)
    IL2CPP_REGISTER_METHOD(
        0x024BCE70,
        void,
        AddQuad_1,
        app::VertexHelper* vertex_helper,
        app::Vector3__Array* quad_positions,
        app::Color32 color,
        app::Vector3__Array* quad_u_vs
    )
    IL2CPP_REGISTER_METHOD(
        0x024BD050,
        void,
        AddQuad_2,
        app::VertexHelper* vertex_helper,
        app::Vector2 pos_min,
        app::Vector2 pos_max,
        app::Color32 color,
        app::Vector2 uv_min,
        app::Vector2 uv_max
    )
    IL2CPP_REGISTER_METHOD(0x024BD240, app::Vector4, GetAdjustedBorders, app::Image* this_ptr, app::Vector4 border, app::Rect adjusted_rect)
    IL2CPP_REGISTER_METHOD(0x024BD570, void, GenerateFilledSprite, app::Image* this_ptr, app::VertexHelper* to_fill, bool preserve_aspect)
    IL2CPP_REGISTER_METHOD(0x024BEB50, bool, RadialCut_1, app::Vector3__Array* xy, app::Vector3__Array* uv, float fill, bool invert, int32_t corner)
    IL2CPP_REGISTER_METHOD(0x024BED20, void, RadialCut_2, app::Vector3__Array* xy, float cos, float sin, bool invert, int32_t corner)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputHorizontal, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputVertical, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF590, float, get_minWidth, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF5A0, float, get_preferredWidth, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleWidth, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF590, float, get_minHeight, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF750, float, get_preferredHeight, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleHeight, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F1B660, int32_t, get_layoutPriority, app::Image* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF8F0, bool, IsRaycastLocationValid, app::Image* this_ptr, app::Vector2 screen_point, app::Camera* event_camera)
    IL2CPP_REGISTER_METHOD(0x024BFE40, app::Vector2, MapCoordinate, app::Image* this_ptr, app::Vector2 local, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x024C03A0, void, RebuildImage, app::SpriteAtlas* sprite_atlas)
    IL2CPP_REGISTER_METHOD(0x024C0580, void, TrackImage, app::Image* g)
    IL2CPP_REGISTER_METHOD(0x024C0930, void, UnTrackImage, app::Image* g)
    IL2CPP_REGISTER_METHOD(0x024C09F0, void, cctor, )
} // namespace app::classes::UnityEngine::UI::Image
