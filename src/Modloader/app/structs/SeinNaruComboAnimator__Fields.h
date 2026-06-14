#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_DEFINED
struct Atlas__Array;
struct Naru;
struct Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_;
struct MeshFilter;
struct Renderer;
struct Mesh;
struct AtlasSpriteTextureBinder;
struct SeinNaruComboAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct Atlas__Array* Atlases;
    struct Naru* Naru;
    bool CorrectUvs;
    struct Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_* m_nameToFrames;
    struct MeshFilter* m_meshFilter;
    struct Renderer* m_renderer;
    struct Mesh* m_mesh;
    struct AtlasSpriteTextureBinder* m_binder;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AtlasSpriteTextureBinder.h>
#include <Modloader/app/structs/Atlas__Array.h>
#include <Modloader/app/structs/Dictionary_2_System_String_SeinNaruComboAnimator_AtlasAndSpriteTexture_.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Naru.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinNaruComboAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SeinNaruComboAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinNaruComboAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
