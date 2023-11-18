#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MotionBlur__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MotionBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlur__Fields_DEFINED)
#include <Modloader/app/structs/ImageEffectBase__Fields.h>
#if defined(IL2CPP_STRUCT_ImageEffectBase__Fields_DEFINED)
#define IL2CPP_STRUCT_MotionBlur__Fields_DEFINED
struct RenderTexture;
struct MotionBlur__Fields {
    struct ImageEffectBase__Fields _;
    float blurAmount;
    bool extraBlur;
    struct RenderTexture* accumTexture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MotionBlur__Fields_FWDDECL)
#define IL2CPP_STRUCT_MotionBlur__Fields_FWDDECL
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_MotionBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MotionBlur__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MotionBlur__Fields_FWDDECL)
#include <Modloader/app/structs/MotionBlur__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MotionBlur__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
