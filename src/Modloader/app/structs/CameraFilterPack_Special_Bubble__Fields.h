#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_DEFINED
struct Shader;
struct Material;
struct CameraFilterPack_Special_Bubble__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float TimeX;
    struct Material* SCMaterial;
    float X;
    float Y;
    float Rate;
    float Value4;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Special_Bubble__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Special_Bubble__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Special_Bubble__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
