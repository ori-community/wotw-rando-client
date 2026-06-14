#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VertexHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VertexHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_VertexHelper__Fields_DEFINED
struct List_1_UnityEngine_Vector3_;
struct List_1_UnityEngine_Color32_;
struct List_1_UnityEngine_Vector2_;
struct List_1_UnityEngine_Vector4_;
struct List_1_System_Int32_;
struct __declspec(align(8)) VertexHelper__Fields {
    struct List_1_UnityEngine_Vector3_* m_Positions;
    struct List_1_UnityEngine_Color32_* m_Colors;
    struct List_1_UnityEngine_Vector2_* m_Uv0S;
    struct List_1_UnityEngine_Vector2_* m_Uv1S;
    struct List_1_UnityEngine_Vector2_* m_Uv2S;
    struct List_1_UnityEngine_Vector2_* m_Uv3S;
    struct List_1_UnityEngine_Vector3_* m_Normals;
    struct List_1_UnityEngine_Vector4_* m_Tangents;
    struct List_1_System_Int32_* m_Indices;
    bool m_ListsInitalized;
};
#endif
#if !defined(IL2CPP_STRUCT_VertexHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_VertexHelper__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector4_.h>
#endif
#undef IL2CPP_STRUCT_VertexHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VertexHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VertexHelper__Fields_FWDDECL)
#include <Modloader/app/structs/VertexHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VertexHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
