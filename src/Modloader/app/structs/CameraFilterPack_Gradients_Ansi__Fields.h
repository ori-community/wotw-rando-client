#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_DEFINED
struct Shader;
struct String;
struct Material;
struct CameraFilterPack_Gradients_Ansi__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    struct String* ShaderName;
    float TimeX;
    struct Material* SCMaterial;
    float Switch;
    float Fade;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Gradients_Ansi__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Gradients_Ansi__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Gradients_Ansi__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
