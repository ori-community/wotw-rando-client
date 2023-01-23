#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_DEFINED
struct String;
struct Shader;
struct Camera;
struct Material;
struct RenderTexture;
struct CameraFilterPack_Blend2Camera_Screen__Fields {
    struct MonoBehaviour__Fields _;
    struct String* ShaderName;
    struct Shader* SCShader;
    struct Camera* Camera2;
    float TimeX;
    struct Material* SCMaterial;
    float SwitchCameraToCamera2;
    float BlendFX;
    struct RenderTexture* Camera2tex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_Screen__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Screen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_Screen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
