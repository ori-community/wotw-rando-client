#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_DEFINED
struct Shader;
struct Material;
struct CameraFilterPack_Colors_HSV__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float _HueShift;
    float _Saturation;
    float _ValueBrightness;
    struct Material* SCMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Colors_HSV__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Colors_HSV__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Colors_HSV__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
