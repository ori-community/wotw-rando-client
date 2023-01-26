#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/IList_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SpriteMeshType__Enum.h>
#include <Modloader/app/structs/SpritePackingMode__Enum.h>
#include <Modloader/app/structs/SpritePackingRotation__Enum.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UInt16__Array.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UnityEngine::Sprite {
    IL2CPP_REGISTER_METHOD(0x02C60CC0, void, ctor, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60D50, int32_t, GetPackingMode, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60DA0, int32_t, GetPackingRotation, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60DF0, int32_t, GetPacked, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60E40, app::Rect, GetTextureRect, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60EC0, app::Vector2, GetTextureRectOffset, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60F30, app::Vector4, GetInnerUVs, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60FB0, app::Vector4, GetOuterUVs, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61030, app::Vector4, GetPadding, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C610B0, app::Sprite*, CreateSpriteWithoutTextureScripting, (app::Rect rect, app::Vector2 pivot, float pixels_to_units, app::Texture2D* texture))
    IL2CPP_REGISTER_METHOD(0x02C61130, app::Sprite*, CreateSprite, (app::Texture2D * texture, app::Rect rect, app::Vector2 pivot, float pixels_per_unit, uint32_t extrude, app::SpriteMeshType__Enum mesh_type, app::Vector4 border, bool generate_fallback_physics_shape))
    IL2CPP_REGISTER_METHOD(0x02C611E0, app::Bounds, get_bounds, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61270, app::Rect, get_rect, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C612F0, app::Vector4, get_border, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61370, app::Texture2D*, get_texture, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C613C0, float, get_pixelsPerUnit, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61410, app::Texture2D*, get_associatedAlphaSplitTexture, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61460, app::Vector2, get_pivot, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C614D0, bool, get_packed, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60D50, app::SpritePackingMode__Enum, get_packingMode, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60DA0, app::SpritePackingRotation__Enum, get_packingRotation, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61530, app::Rect, get_textureRect, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61650, app::Vector2, get_textureRectOffset, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C617F0, app::Vector2__Array*, get_vertices, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61840, app::UInt16__Array*, get_triangles, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61890, app::Vector2__Array*, get_uv, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C618E0, int32_t, GetPhysicsShapeCount, (app::Sprite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C61930, int32_t, GetPhysicsShapePointCount, (app::Sprite * this_ptr, int32_t shape_idx))
    IL2CPP_REGISTER_METHOD(0x02C61AD0, int32_t, Internal_GetPhysicsShapePointCount, (app::Sprite * this_ptr, int32_t shape_idx))
    IL2CPP_REGISTER_METHOD(0x02C61B30, int32_t, GetPhysicsShape, (app::Sprite * this_ptr, int32_t shape_idx, app::List_1_UnityEngine_Vector2_* physics_shape))
    IL2CPP_REGISTER_METHOD(0x02C61CF0, void, GetPhysicsShapeImpl, (app::Sprite * sprite, int32_t shape_idx, app::List_1_UnityEngine_Vector2_* physics_shape))
    IL2CPP_REGISTER_METHOD(0x02C61D60, void, OverridePhysicsShape_1, (app::Sprite * this_ptr, app::IList_1_UnityEngine_Vector2_* physics_shapes))
    IL2CPP_REGISTER_METHOD(0x02C620C0, void, OverridePhysicsShapeCount, (app::Sprite * sprite, int32_t physics_shape_count))
    IL2CPP_REGISTER_METHOD(0x02C62120, void, OverridePhysicsShape_2, (app::Sprite * sprite, app::Vector2__Array* physics_shape, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x02C62190, void, OverrideGeometry, (app::Sprite * this_ptr, app::Vector2__Array* vertices, app::UInt16__Array* triangles))
    IL2CPP_REGISTER_METHOD(0x02C62200, app::Sprite*, Create_1, (app::Rect rect, app::Vector2 pivot, float pixels_to_units, app::Texture2D* texture))
    IL2CPP_REGISTER_METHOD(0x02C62280, app::Sprite*, Create_2, (app::Rect rect, app::Vector2 pivot, float pixels_to_units))
    IL2CPP_REGISTER_METHOD(0x02C62300, app::Sprite*, Create_3, (app::Texture2D * texture, app::Rect rect, app::Vector2 pivot, float pixels_per_unit, uint32_t extrude, app::SpriteMeshType__Enum mesh_type, app::Vector4 border, bool generate_fallback_physics_shape))
    IL2CPP_REGISTER_METHOD(0x02C627E0, app::Sprite*, Create_4, (app::Texture2D * texture, app::Rect rect, app::Vector2 pivot, float pixels_per_unit, uint32_t extrude, app::SpriteMeshType__Enum mesh_type, app::Vector4 border))
    IL2CPP_REGISTER_METHOD(0x02C62840, app::Sprite*, Create_5, (app::Texture2D * texture, app::Rect rect, app::Vector2 pivot, float pixels_per_unit, uint32_t extrude, app::SpriteMeshType__Enum mesh_type))
    IL2CPP_REGISTER_METHOD(0x02C62970, app::Sprite*, Create_6, (app::Texture2D * texture, app::Rect rect, app::Vector2 pivot, float pixels_per_unit, uint32_t extrude))
    IL2CPP_REGISTER_METHOD(0x02C62AA0, app::Sprite*, Create_7, (app::Texture2D * texture, app::Rect rect, app::Vector2 pivot, float pixels_per_unit))
    IL2CPP_REGISTER_METHOD(0x02C62BC0, app::Sprite*, Create_8, (app::Texture2D * texture, app::Rect rect, app::Vector2 pivot))
    IL2CPP_REGISTER_METHOD(0x02C62CE0, void, GetTextureRect_Injected, (app::Sprite * this_ptr, app::Rect* ret))
    IL2CPP_REGISTER_METHOD(0x02C62D40, void, GetTextureRectOffset_Injected, (app::Sprite * this_ptr, app::Vector2* ret))
    IL2CPP_REGISTER_METHOD(0x02C62DA0, void, GetInnerUVs_Injected, (app::Sprite * this_ptr, app::Vector4* ret))
    IL2CPP_REGISTER_METHOD(0x02C62E00, void, GetOuterUVs_Injected, (app::Sprite * this_ptr, app::Vector4* ret))
    IL2CPP_REGISTER_METHOD(0x02C62E60, void, GetPadding_Injected, (app::Sprite * this_ptr, app::Vector4* ret))
    IL2CPP_REGISTER_METHOD(0x02C62EC0, app::Sprite*, CreateSpriteWithoutTextureScripting_Injected, (app::Rect * rect, app::Vector2* pivot, float pixels_to_units, app::Texture2D* texture))
    IL2CPP_REGISTER_METHOD(0x02C62F40, app::Sprite*, CreateSprite_Injected, (app::Texture2D * texture, app::Rect* rect, app::Vector2* pivot, float pixels_per_unit, uint32_t extrude, app::SpriteMeshType__Enum mesh_type, app::Vector4* border, bool generate_fallback_physics_shape))
    IL2CPP_REGISTER_METHOD(0x02C62FE0, void, get_bounds_Injected, (app::Sprite * this_ptr, app::Bounds* ret))
    IL2CPP_REGISTER_METHOD(0x02C63040, void, get_rect_Injected, (app::Sprite * this_ptr, app::Rect* ret))
    IL2CPP_REGISTER_METHOD(0x02C630A0, void, get_border_Injected, (app::Sprite * this_ptr, app::Vector4* ret))
    IL2CPP_REGISTER_METHOD(0x02C63100, void, get_pivot_Injected, (app::Sprite * this_ptr, app::Vector2* ret))
} // namespace app::classes::UnityEngine::Sprite
