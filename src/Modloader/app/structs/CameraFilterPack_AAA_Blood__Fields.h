#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_DEFINED
struct Shader;
struct Material;
struct Texture2D;
struct CameraFilterPack_AAA_Blood__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float TimeX;
    float Blood1;
    float Blood2;
    float Blood3;
    float Blood4;
    float LightReflect;
    struct Material* SCMaterial;
    struct Texture2D* Texture2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_Blood__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_AAA_Blood__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_AAA_Blood__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
