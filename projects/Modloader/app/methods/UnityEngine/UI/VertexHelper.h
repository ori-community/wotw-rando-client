#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::UI::VertexHelper {
    IL2CPP_REGISTER_METHOD(0x009A3B50, void, ctor_1, (app::VertexHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031A82E0, void, ctor_2, (app::VertexHelper * this_ptr, app::Mesh* m))
    IL2CPP_REGISTER_METHOD(0x031A8870, void, InitializeListIfRequired, (app::VertexHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031A9550, void, Dispose, (app::VertexHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031AA280, void, Clear, (app::VertexHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031AA4C0, int32_t, get_currentVertCount, (app::VertexHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031AA550, int32_t, get_currentIndexCount, (app::VertexHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031AA5E0, void, PopulateUIVertex, (app::VertexHelper * this_ptr, app::UIVertex* vertex, int32_t i))
    IL2CPP_REGISTER_METHOD(0x031AA850, void, SetUIVertex, (app::VertexHelper * this_ptr, app::UIVertex vertex, int32_t i))
    IL2CPP_REGISTER_METHOD(0x031AAB50, void, FillMesh, (app::VertexHelper * this_ptr, app::Mesh* mesh))
    IL2CPP_REGISTER_METHODINFO(0x04797F08, VertexHelper_FillMesh__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031AAE10, void, AddVert_1, (app::VertexHelper * this_ptr, app::Vector3 position, app::Color32 color, app::Vector2 uv0, app::Vector2 uv1, app::Vector2 uv2, app::Vector2 uv3, app::Vector3 normal, app::Vector4 tangent))
    IL2CPP_REGISTER_METHOD(0x031AB2E0, void, AddVert_2, (app::VertexHelper * this_ptr, app::Vector3 position, app::Color32 color, app::Vector2 uv0, app::Vector2 uv1, app::Vector3 normal, app::Vector4 tangent))
    IL2CPP_REGISTER_METHOD(0x031AB450, void, AddVert_3, (app::VertexHelper * this_ptr, app::Vector3 position, app::Color32 color, app::Vector2 uv0))
    IL2CPP_REGISTER_METHOD(0x031AB5C0, void, AddVert_4, (app::VertexHelper * this_ptr, app::UIVertex v))
    IL2CPP_REGISTER_METHOD(0x031AB650, void, AddTriangle, (app::VertexHelper * this_ptr, int32_t idx0, int32_t idx1, int32_t idx2))
    IL2CPP_REGISTER_METHOD(0x031AB8A0, void, AddUIVertexQuad, (app::VertexHelper * this_ptr, app::UIVertex__Array* verts))
    IL2CPP_REGISTER_METHOD(0x031ABAF0, void, AddUIVertexStream, (app::VertexHelper * this_ptr, app::List_1_UnityEngine_UIVertex_* verts, app::List_1_System_Int32_* indices))
    IL2CPP_REGISTER_METHOD(0x031ABC90, void, AddUIVertexTriangleStream, (app::VertexHelper * this_ptr, app::List_1_UnityEngine_UIVertex_* verts))
    IL2CPP_REGISTER_METHOD(0x031ABDE0, void, GetUIVertexStream, (app::VertexHelper * this_ptr, app::List_1_UnityEngine_UIVertex_* stream))
    IL2CPP_REGISTER_METHOD(0x031ABEF0, void, cctor, ())
} // namespace app::classes::UnityEngine::UI::VertexHelper
