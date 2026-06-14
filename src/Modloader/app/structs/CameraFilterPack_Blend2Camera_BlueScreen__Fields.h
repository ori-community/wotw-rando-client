#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_DEFINED
struct String;
struct Shader;
struct Camera;
struct Material;
struct RenderTexture;
struct CameraFilterPack_Blend2Camera_BlueScreen__Fields {
    struct MonoBehaviour__Fields _;
    struct String* ShaderName;
    struct Shader* SCShader;
    struct Camera* Camera2;
    float TimeX;
    struct Material* SCMaterial;
    float BlendFX;
    float Adjust;
    float Precision;
    float Luminosity;
    float Change_Red;
    float Change_Green;
    float Change_Blue;
    struct RenderTexture* Camera2tex;
    struct Vector2 ScreenSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Blend2Camera_BlueScreen__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_BlueScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Blend2Camera_BlueScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
