#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_DEFINED
struct Shader;
struct Material;
struct CameraFilterPack_Vision_Crystal__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float TimeX;
    struct Material* SCMaterial;
    float Value;
    float X;
    float Y;
    float Value4;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Vision_Crystal__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Vision_Crystal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Vision_Crystal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
