#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_DEFINED
struct Shader;
struct Material;
struct CameraFilterPack_Drawing_Crosshatch__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float TimeX;
    struct Material* SCMaterial;
    float Width;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Drawing_Crosshatch__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Drawing_Crosshatch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Drawing_Crosshatch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
