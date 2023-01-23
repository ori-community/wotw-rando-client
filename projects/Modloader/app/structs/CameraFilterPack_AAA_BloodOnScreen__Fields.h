#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_DEFINED
struct Shader;
struct Material;
struct Texture2D;
struct CameraFilterPack_AAA_BloodOnScreen__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float TimeX;
    float Blood_On_Screen;
    struct Color Blood_Color;
    float Blood_Intensify;
    float Blood_Darkness;
    float Blood_Distortion_Speed;
    float Blood_Fade;
    struct Material* SCMaterial;
    struct Texture2D* Texture2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_AAA_BloodOnScreen__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_AAA_BloodOnScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_AAA_BloodOnScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
