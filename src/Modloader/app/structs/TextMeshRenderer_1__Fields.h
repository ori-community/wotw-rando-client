#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshRenderer_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshRenderer_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshRenderer_1__Fields_DEFINED)
#include <Modloader/app/structs/TextRenderer_1__Fields.h>
#if defined(IL2CPP_STRUCT_TextRenderer_1__Fields_DEFINED)
#define IL2CPP_STRUCT_TextMeshRenderer_1__Fields_DEFINED
struct Mesh;
struct Vector3__Array;
struct Color32__Array;
struct Vector2__Array;
struct Int32__Array;
struct TextMeshRenderer_1__Fields {
    struct TextRenderer_1__Fields _;
    int32_t chunkSize;
    struct Mesh* mesh;
    struct Vector3__Array* vertices;
    struct Color32__Array* colors;
    struct Vector2__Array* uv;
    struct Int32__Array* triangles;
    bool meshResized;
    int32_t lastRendererCharCount;
    int32_t currentVertexIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshRenderer_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextMeshRenderer_1__Fields_FWDDECL
#include <Modloader/app/structs/Color32__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_TextMeshRenderer_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshRenderer_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshRenderer_1__Fields_FWDDECL)
#include <Modloader/app/structs/TextMeshRenderer_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshRenderer_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
