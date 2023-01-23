#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_DEFINED
struct MeshRenderer;
struct AVProWindowsMediaMovie;
struct AVProWindowsMediaMeshApply__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer* _mesh;
    struct AVProWindowsMediaMovie* _movie;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_FWDDECL)
#define IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_FWDDECL
#include <Modloader/app/structs/AVProWindowsMediaMovie.h>
#include <Modloader/app/structs/MeshRenderer.h>
#endif
#undef IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AVProWindowsMediaMeshApply__Fields_FWDDECL)
#include <Modloader/app/structs/AVProWindowsMediaMeshApply__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AVProWindowsMediaMeshApply__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
