#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_DEFINED
struct Shader;
struct Material;
struct CameraFilterPack_Blur_Tilt_Shift_Hole__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float TimeX;
    struct Material* SCMaterial;
    float Amount;
    int32_t FastFilter;
    float Smooth;
    float Size;
    float PositionX;
    float PositionY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Blur_Tilt_Shift_Hole__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Blur_Tilt_Shift_Hole__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Blur_Tilt_Shift_Hole__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
