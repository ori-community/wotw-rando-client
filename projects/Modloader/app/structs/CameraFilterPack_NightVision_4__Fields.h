#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_DEFINED
struct String;
struct Shader;
struct Material;
struct Single__Array;
struct CameraFilterPack_NightVision_4__Fields {
    struct MonoBehaviour__Fields _;
    struct String* ShaderName;
    struct Shader* SCShader;
    float FadeFX;
    float TimeX;
    struct Material* SCMaterial;
    struct Single__Array* Matrix9;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_NightVision_4__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_NightVision_4__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_NightVision_4__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
