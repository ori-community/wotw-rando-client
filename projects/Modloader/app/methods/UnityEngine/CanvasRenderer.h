#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanvasRenderer.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UIVertex_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Texture.h>

namespace app::classes::UnityEngine::CanvasRenderer {
    IL2CPP_REGISTER_METHOD(0x031A5FE0, void, set_hasPopInstruction, app::CanvasRenderer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031A6040, int32_t, get_materialCount, app::CanvasRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A6090, void, set_materialCount, app::CanvasRenderer* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x031A60F0, void, set_popMaterialCount, app::CanvasRenderer* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x031A6150, int32_t, get_absoluteDepth, app::CanvasRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A61A0, bool, get_hasMoved, app::CanvasRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A61F0, bool, get_cull, app::CanvasRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A6240, void, set_cull, app::CanvasRenderer* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031A62A0, void, SetColor, app::CanvasRenderer* this_ptr, app::Color color)
    IL2CPP_REGISTER_METHOD(0x031A6300, app::Color, GetColor, app::CanvasRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A6380, void, EnableRectClipping, app::CanvasRenderer* this_ptr, app::Rect rect)
    IL2CPP_REGISTER_METHOD(0x031A63E0, void, DisableRectClipping, app::CanvasRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A6430, void, SetMaterial_1, app::CanvasRenderer* this_ptr, app::Material* material, int32_t index)
    IL2CPP_REGISTER_METHOD(0x031A64A0, void, SetPopMaterial, app::CanvasRenderer* this_ptr, app::Material* material, int32_t index)
    IL2CPP_REGISTER_METHOD(0x031A6510, void, SetTexture, app::CanvasRenderer* this_ptr, app::Texture* texture)
    IL2CPP_REGISTER_METHOD(0x031A6570, void, SetAlphaTexture, app::CanvasRenderer* this_ptr, app::Texture* texture)
    IL2CPP_REGISTER_METHOD(0x031A65D0, void, SetMesh, app::CanvasRenderer* this_ptr, app::Mesh* mesh)
    IL2CPP_REGISTER_METHOD(0x031A6630, void, Clear, app::CanvasRenderer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031A6680, void, SetMaterial_2, app::CanvasRenderer* this_ptr, app::Material* material, app::Texture* texture)
    IL2CPP_REGISTER_METHOD(
        0x031A6860,
        void,
        SplitUIVertexStreams,
        app::List_1_UnityEngine_UIVertex_* verts,
        app::List_1_UnityEngine_Vector3_* positions,
        app::List_1_UnityEngine_Color32_* colors,
        app::List_1_UnityEngine_Vector2_* uv0_s,
        app::List_1_UnityEngine_Vector2_* uv1_s,
        app::List_1_UnityEngine_Vector2_* uv2_s,
        app::List_1_UnityEngine_Vector2_* uv3_s,
        app::List_1_UnityEngine_Vector3_* normals,
        app::List_1_UnityEngine_Vector4_* tangents,
        app::List_1_System_Int32_* indices
    )
    IL2CPP_REGISTER_METHOD(
        0x031A6980,
        void,
        CreateUIVertexStream,
        app::List_1_UnityEngine_UIVertex_* verts,
        app::List_1_UnityEngine_Vector3_* positions,
        app::List_1_UnityEngine_Color32_* colors,
        app::List_1_UnityEngine_Vector2_* uv0_s,
        app::List_1_UnityEngine_Vector2_* uv1_s,
        app::List_1_UnityEngine_Vector2_* uv2_s,
        app::List_1_UnityEngine_Vector2_* uv3_s,
        app::List_1_UnityEngine_Vector3_* normals,
        app::List_1_UnityEngine_Vector4_* tangents,
        app::List_1_System_Int32_* indices
    )
    IL2CPP_REGISTER_METHOD(
        0x031A6A10,
        void,
        AddUIVertexStream,
        app::List_1_UnityEngine_UIVertex_* verts,
        app::List_1_UnityEngine_Vector3_* positions,
        app::List_1_UnityEngine_Color32_* colors,
        app::List_1_UnityEngine_Vector2_* uv0_s,
        app::List_1_UnityEngine_Vector2_* uv1_s,
        app::List_1_UnityEngine_Vector2_* uv2_s,
        app::List_1_UnityEngine_Vector2_* uv3_s,
        app::List_1_UnityEngine_Vector3_* normals,
        app::List_1_UnityEngine_Vector4_* tangents
    )
    IL2CPP_REGISTER_METHOD(0x031A6AA0, void, SplitIndicesStreamsInternal, app::Object* verts, app::Object* indices)
    IL2CPP_REGISTER_METHOD(
        0x031A6A10,
        void,
        SplitUIVertexStreamsInternal,
        app::Object* verts,
        app::Object* positions,
        app::Object* colors,
        app::Object* uv0_s,
        app::Object* uv1_s,
        app::Object* uv2_s,
        app::Object* uv3_s,
        app::Object* normals,
        app::Object* tangents
    )
    IL2CPP_REGISTER_METHOD(
        0x031A6980,
        void,
        CreateUIVertexStreamInternal,
        app::Object* verts,
        app::Object* positions,
        app::Object* colors,
        app::Object* uv0_s,
        app::Object* uv1_s,
        app::Object* uv2_s,
        app::Object* uv3_s,
        app::Object* normals,
        app::Object* tangents,
        app::Object* indices
    )
    IL2CPP_REGISTER_METHOD(0x031A6B00, void, SetColor_Injected, app::CanvasRenderer* this_ptr, app::Color* color)
    IL2CPP_REGISTER_METHOD(0x031A6B60, void, GetColor_Injected, app::CanvasRenderer* this_ptr, app::Color* ret)
    IL2CPP_REGISTER_METHOD(0x031A6BC0, void, EnableRectClipping_Injected, app::CanvasRenderer* this_ptr, app::Rect* rect)
} // namespace app::classes::UnityEngine::CanvasRenderer
