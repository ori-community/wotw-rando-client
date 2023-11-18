#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TiltShift__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TiltShift__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TiltShift__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#include <Modloader/app/structs/TiltShift_TiltShiftMode__Enum.h>
#include <Modloader/app/structs/TiltShift_TiltShiftQuality__Enum.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_TiltShift_TiltShiftMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_TiltShift_TiltShiftQuality__Enum_DEFINED)
#define IL2CPP_STRUCT_TiltShift__Fields_DEFINED
struct Shader;
struct Material;
struct TiltShift__Fields {
    struct PostEffectsBase__Fields _;
    TiltShift_TiltShiftMode__Enum mode;

    TiltShift_TiltShiftQuality__Enum quality;

    float blurArea;
    float maxBlurSize;
    int32_t downsample;
    struct Shader* tiltShiftShader;
    struct Material* tiltShiftMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TiltShift__Fields_FWDDECL)
#define IL2CPP_STRUCT_TiltShift__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_TiltShift__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TiltShift__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TiltShift__Fields_FWDDECL)
#include <Modloader/app/structs/TiltShift__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TiltShift__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
