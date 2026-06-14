#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_DEFINED)
#include <Modloader/app/structs/TextRenderer__Fields.h>
#if defined(IL2CPP_STRUCT_TextRenderer__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_DEFINED
struct Mesh;
struct Vector3__Array;
struct Color32__Array;
struct Vector4__Array;
struct List_1_UnityEngine_Vector4_;
struct Int32__Array;
struct MoonTextMeshRenderer__Fields {
    struct TextRenderer__Fields _;
    int32_t chunkSize;
    struct Mesh* mesh;
    struct Vector3__Array* vertices;
    struct Color32__Array* colors;
    struct Vector4__Array* uv;
    struct Vector4__Array* uv2;
    struct List_1_UnityEngine_Vector4_* uvMain;
    struct List_1_UnityEngine_Vector4_* uvText;
    struct Vector3__Array* normals;
    struct Int32__Array* triangles;
    bool meshResized;
    int32_t lastRendererCharCount;
    int32_t currentVertexIndex;
    float FadeSpread;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_FWDDECL
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTextMeshRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTextMeshRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTextMeshRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
