#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/BoneWeight__Array.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Matrix4x4__Array.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshTopology__Enum.h>
#include <Modloader/app/structs/Mesh_InternalVertexChannelType__Enum.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/Vector4__Array.h>
#include <Modloader/app/structs/VertexAttribute__Enum.h>

namespace app::classes::UnityEngine::Mesh {
    IL2CPP_REGISTER_METHOD(0x02539620, void, ctor, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025396F0, void, Internal_Create, app::Mesh* mono)
    IL2CPP_REGISTER_METHOD(0x02539740, app::Int32__Array*, GetTrianglesImpl, app::Mesh* this_ptr, int32_t submesh, bool apply_base_vertex)
    IL2CPP_REGISTER_METHOD(0x025397B0, app::Int32__Array*, GetIndicesImpl, app::Mesh* this_ptr, int32_t submesh, bool apply_base_vertex)
    IL2CPP_REGISTER_METHOD(
        0x02539820,
        void,
        SetIndicesImpl,
        app::Mesh* this_ptr,
        int32_t submesh,
        app::MeshTopology__Enum topology,
        app::Array* indices,
        int32_t array_size,
        bool calculate_bounds,
        int32_t base_vertex
    )
    IL2CPP_REGISTER_METHOD(0x025398B0, void, PrintErrorCantAccessChannel, app::Mesh* this_ptr, app::VertexAttribute__Enum ch)
    IL2CPP_REGISTER_METHOD(0x02539910, bool, HasChannel, app::Mesh* this_ptr, app::VertexAttribute__Enum ch)
    IL2CPP_REGISTER_METHOD(
        0x02539970,
        void,
        SetArrayForChannelImpl,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::Array* values,
        int32_t array_size
    )
    IL2CPP_REGISTER_METHOD(
        0x025399F0,
        app::Array*,
        GetAllocArrayFromChannelImpl,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim
    )
    IL2CPP_REGISTER_METHOD(0x02539A70, app::BoneWeight__Array*, get_boneWeights, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539AC0, app::Matrix4x4__Array*, get_bindposes, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539B10, bool, get_isReadable, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539B60, void, EditorSetReadable, app::Mesh* this_ptr, bool readable)
    IL2CPP_REGISTER_METHOD(0x02539BC0, bool, get_canAccess, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539C10, int32_t, get_vertexCount, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539C60, int32_t, get_subMeshCount, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539CB0, void, set_subMeshCount, app::Mesh* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02539D10, app::Bounds, get_bounds, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539DA0, void, set_bounds, app::Mesh* this_ptr, app::Bounds value)
    IL2CPP_REGISTER_METHOD(0x02539E00, void, ClearImpl, app::Mesh* this_ptr, bool keep_vertex_layout)
    IL2CPP_REGISTER_METHOD(0x02539E60, void, RecalculateBoundsImpl, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539EB0, void, RecalculateNormalsImpl, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539F00, void, MarkDynamicImpl, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02539F50, void, UploadMeshDataImpl, app::Mesh* this_ptr, bool mark_no_longer_readable)
    IL2CPP_REGISTER_METHOD(0x02539FB0, app::VertexAttribute__Enum, GetUVChannel, app::Mesh* this_ptr, int32_t uv_index)
    IL2CPP_REGISTER_METHOD(0x0253A060, int32_t, DefaultDimensionForChannel, app::VertexAttribute__Enum channel)
    IL2CPP_REGISTER_METHOD(
        0x0253A140,
        void,
        SetSizedArrayForChannel,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::Array* values,
        int32_t values_count
    )
    IL2CPP_REGISTER_METHOD(0x0253A270, app::Vector3__Array*, get_vertices, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253A320, void, set_vertices, app::Mesh* this_ptr, app::Vector3__Array* value)
    IL2CPP_REGISTER_METHOD(0x0253A3B0, app::Vector3__Array*, get_normals, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253A470, void, set_normals, app::Mesh* this_ptr, app::Vector3__Array* value)
    IL2CPP_REGISTER_METHOD(0x0253A500, app::Vector4__Array*, get_tangents, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253A5C0, app::Vector2__Array*, get_uv, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253A680, void, set_uv, app::Mesh* this_ptr, app::Vector2__Array* value)
    IL2CPP_REGISTER_METHOD(0x0253A710, app::Vector2__Array*, get_uv2, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253A7D0, void, set_uv2, app::Mesh* this_ptr, app::Vector2__Array* value)
    IL2CPP_REGISTER_METHOD(0x0253A860, app::Vector2__Array*, get_uv3, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253A920, app::Vector2__Array*, get_uv4, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253A9E0, void, set_colors, app::Mesh* this_ptr, app::Color__Array* value)
    IL2CPP_REGISTER_METHOD(0x0253AAC0, app::Color32__Array*, get_colors32, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253AB60, void, set_colors32, app::Mesh* this_ptr, app::Color32__Array* value)
    IL2CPP_REGISTER_METHOD(0x0253AC30, void, SetVertices, app::Mesh* this_ptr, app::List_1_UnityEngine_Vector3_* in_vertices)
    IL2CPP_REGISTER_METHOD(0x0253ACC0, void, SetNormals, app::Mesh* this_ptr, app::List_1_UnityEngine_Vector3_* in_normals)
    IL2CPP_REGISTER_METHOD(0x0253AD50, void, SetTangents, app::Mesh* this_ptr, app::List_1_UnityEngine_Vector4_* in_tangents)
    IL2CPP_REGISTER_METHOD(0x0253AE80, void, SetColors_1, app::Mesh* this_ptr, app::List_1_UnityEngine_Color_* in_colors)
    IL2CPP_REGISTER_METHOD(0x0253AFB0, void, SetColors_2, app::Mesh* this_ptr, app::List_1_UnityEngine_Color32_* in_colors)
    IL2CPP_REGISTER_METHOD(0x0253B0E0, void, SetUVs_1, app::Mesh* this_ptr, int32_t channel, app::List_1_UnityEngine_Vector2_* uvs)
    IL2CPP_REGISTER_METHOD(0x0253B250, void, SetUVs_2, app::Mesh* this_ptr, int32_t channel, app::List_1_UnityEngine_Vector3_* uvs)
    IL2CPP_REGISTER_METHOD(0x0253B3C0, void, SetUVs_3, app::Mesh* this_ptr, int32_t channel, app::List_1_UnityEngine_Vector4_* uvs)
    IL2CPP_REGISTER_METHOD(0x0253B530, void, PrintErrorCantAccessIndices, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253B630, bool, CheckCanAccessSubmesh, app::Mesh* this_ptr, int32_t submesh, bool error_about_triangles)
    IL2CPP_REGISTER_METHOD(0x0253B810, bool, CheckCanAccessSubmeshTriangles, app::Mesh* this_ptr, int32_t submesh)
    IL2CPP_REGISTER_METHOD(0x0253B820, bool, CheckCanAccessSubmeshIndices, app::Mesh* this_ptr, int32_t submesh)
    IL2CPP_REGISTER_METHOD(0x0253B830, app::Int32__Array*, get_triangles, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253B950, void, set_triangles, app::Mesh* this_ptr, app::Int32__Array* value)
    IL2CPP_REGISTER_METHOD(0x0253BA00, app::Int32__Array*, GetTriangles_1, app::Mesh* this_ptr, int32_t submesh)
    IL2CPP_REGISTER_METHOD(0x0253BAC0, app::Int32__Array*, GetTriangles_2, app::Mesh* this_ptr, int32_t submesh, bool apply_base_vertex)
    IL2CPP_REGISTER_METHOD(0x0253BB90, app::Int32__Array*, GetIndices_1, app::Mesh* this_ptr, int32_t submesh)
    IL2CPP_REGISTER_METHOD(0x0253BC90, app::Int32__Array*, GetIndices_2, app::Mesh* this_ptr, int32_t submesh, bool apply_base_vertex)
    IL2CPP_REGISTER_METHOD(
        0x0253BD90,
        void,
        SetTrianglesImpl,
        app::Mesh* this_ptr,
        int32_t submesh,
        app::Array* triangles,
        int32_t array_size,
        bool calculate_bounds,
        int32_t base_vertex
    )
    IL2CPP_REGISTER_METHOD(0x0253BE30, void, SetTriangles_1, app::Mesh* this_ptr, app::List_1_System_Int32_* triangles, int32_t submesh)
    IL2CPP_REGISTER_METHOD(0x0253BE50, void, SetTriangles_2, app::Mesh* this_ptr, app::List_1_System_Int32_* triangles, int32_t submesh, bool calculate_bounds)
    IL2CPP_REGISTER_METHOD(
        0x0253BE70,
        void,
        SetTriangles_3,
        app::Mesh* this_ptr,
        app::List_1_System_Int32_* triangles,
        int32_t submesh,
        bool calculate_bounds,
        int32_t base_vertex
    )
    IL2CPP_REGISTER_METHOD(0x0253BFB0, void, SetIndices_1, app::Mesh* this_ptr, app::Int32__Array* indices, app::MeshTopology__Enum topology, int32_t submesh)
    IL2CPP_REGISTER_METHOD(
        0x0253C040,
        void,
        SetIndices_2,
        app::Mesh* this_ptr,
        app::Int32__Array* indices,
        app::MeshTopology__Enum topology,
        int32_t submesh,
        bool calculate_bounds
    )
    IL2CPP_REGISTER_METHOD(
        0x0253C070,
        void,
        SetIndices_3,
        app::Mesh* this_ptr,
        app::Int32__Array* indices,
        app::MeshTopology__Enum topology,
        int32_t submesh,
        bool calculate_bounds,
        int32_t base_vertex
    )
    IL2CPP_REGISTER_METHOD(0x02539E00, void, Clear_1, app::Mesh* this_ptr, bool keep_vertex_layout)
    IL2CPP_REGISTER_METHOD(0x0253C100, void, Clear_2, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253C160, void, RecalculateBounds, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253C2F0, void, RecalculateNormals, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253C480, void, MarkDynamic, app::Mesh* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0253C520, void, UploadMeshData, app::Mesh* this_ptr, bool mark_no_longer_readable)
    IL2CPP_REGISTER_METHOD(0x0253C5D0, void, get_bounds_Injected, app::Mesh* this_ptr, app::Bounds* ret)
    IL2CPP_REGISTER_METHOD(0x0253C630, void, set_bounds_Injected, app::Mesh* this_ptr, app::Bounds* value)
    IL2CPP_REGISTER_METHOD(
        0x02FF6330,
        app::Object__Array*,
        GetAllocArrayFromChannel_1,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim
    )
    IL2CPP_REGISTER_METHOD(0x02FF62D0, app::Object__Array*, GetAllocArrayFromChannel_2, app::Mesh* this_ptr, app::VertexAttribute__Enum channel)
    IL2CPP_REGISTER_METHOD(
        0x015E5AB0,
        void,
        SetArrayForChannel_1,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::Object__Array* values
    )
    IL2CPP_REGISTER_METHOD(0x015E5A30, void, SetArrayForChannel_2, app::Mesh* this_ptr, app::VertexAttribute__Enum channel, app::Object__Array* values)
    IL2CPP_REGISTER_METHOD(
        0x015E5C10,
        void,
        SetListForChannel_1,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::List_1_System_Object_* values
    )
    IL2CPP_REGISTER_METHOD(0x015E5B40, void, SetListForChannel_2, app::Mesh* this_ptr, app::VertexAttribute__Enum channel, app::List_1_System_Object_* values)
    IL2CPP_REGISTER_METHOD(0x015E5CE0, void, SetUvsImpl_1, app::Mesh* this_ptr, int32_t uv_index, int32_t dim, app::List_1_System_Object_* uvs)
    IL2CPP_REGISTER_METHOD(0x02FF62D0, app::Vector3__Array*, GetAllocArrayFromChannel_3, app::Mesh* this_ptr, app::VertexAttribute__Enum channel)
    IL2CPP_REGISTER_METHOD(0x015E5A30, void, SetArrayForChannel_3, app::Mesh* this_ptr, app::VertexAttribute__Enum channel, app::Vector3__Array* values)
    IL2CPP_REGISTER_METHOD(0x02FF62D0, app::Vector4__Array*, GetAllocArrayFromChannel_4, app::Mesh* this_ptr, app::VertexAttribute__Enum channel)
    IL2CPP_REGISTER_METHOD(0x02FF62D0, app::Vector2__Array*, GetAllocArrayFromChannel_5, app::Mesh* this_ptr, app::VertexAttribute__Enum channel)
    IL2CPP_REGISTER_METHOD(0x015E5A30, void, SetArrayForChannel_4, app::Mesh* this_ptr, app::VertexAttribute__Enum channel, app::Vector2__Array* values)
    IL2CPP_REGISTER_METHOD(0x015E5A30, void, SetArrayForChannel_5, app::Mesh* this_ptr, app::VertexAttribute__Enum channel, app::Color__Array* values)
    IL2CPP_REGISTER_METHOD(
        0x02FF6330,
        app::Color32__Array*,
        GetAllocArrayFromChannel_6,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim
    )
    IL2CPP_REGISTER_METHOD(
        0x015E5AB0,
        void,
        SetArrayForChannel_6,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::Color32__Array* values
    )
    IL2CPP_REGISTER_METHOD(
        0x015E5B40,
        void,
        SetListForChannel_3,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::List_1_UnityEngine_Vector3_* values
    )
    IL2CPP_REGISTER_METHOD(
        0x015E5B40,
        void,
        SetListForChannel_4,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::List_1_UnityEngine_Vector4_* values
    )
    IL2CPP_REGISTER_METHOD(
        0x015E5B40,
        void,
        SetListForChannel_5,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::List_1_UnityEngine_Color_* values
    )
    IL2CPP_REGISTER_METHOD(
        0x015E5C10,
        void,
        SetListForChannel_6,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::List_1_UnityEngine_Color32_* values
    )
    IL2CPP_REGISTER_METHOD(0x015E5DF0, void, SetUvsImpl_2, app::Mesh* this_ptr, int32_t uv_index, int32_t dim, app::List_1_UnityEngine_Vector2_* uvs)
    IL2CPP_REGISTER_METHOD(0x015E5F00, void, SetUvsImpl_3, app::Mesh* this_ptr, int32_t uv_index, int32_t dim, app::List_1_UnityEngine_Vector3_* uvs)
    IL2CPP_REGISTER_METHOD(0x015E6010, void, SetUvsImpl_4, app::Mesh* this_ptr, int32_t uv_index, int32_t dim, app::List_1_UnityEngine_Vector4_* uvs)
    IL2CPP_REGISTER_METHOD(
        0x015E5C10,
        void,
        SetListForChannel_7,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::List_1_UnityEngine_Vector2_* values
    )
    IL2CPP_REGISTER_METHOD(
        0x015E5C10,
        void,
        SetListForChannel_8,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::List_1_UnityEngine_Vector3_* values
    )
    IL2CPP_REGISTER_METHOD(
        0x015E5C10,
        void,
        SetListForChannel_9,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim,
        app::List_1_UnityEngine_Vector4_* values
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF6330,
        app::Vector2__Array*,
        GetAllocArrayFromChannel_7,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF6330,
        app::Vector3__Array*,
        GetAllocArrayFromChannel_8,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim
    )
    IL2CPP_REGISTER_METHOD(
        0x02FF6330,
        app::Vector4__Array*,
        GetAllocArrayFromChannel_9,
        app::Mesh* this_ptr,
        app::VertexAttribute__Enum channel,
        app::Mesh_InternalVertexChannelType__Enum format,
        int32_t dim
    )
} // namespace app::classes::UnityEngine::Mesh
