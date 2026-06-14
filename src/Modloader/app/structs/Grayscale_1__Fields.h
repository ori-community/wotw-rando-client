#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Grayscale_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Grayscale_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grayscale_1__Fields_DEFINED)
#include <Modloader/app/structs/ImageEffectBase__Fields.h>
#if defined(IL2CPP_STRUCT_ImageEffectBase__Fields_DEFINED)
#define IL2CPP_STRUCT_Grayscale_1__Fields_DEFINED
struct Texture;
struct Grayscale_1__Fields {
    struct ImageEffectBase__Fields _;
    struct Texture* textureRamp;
    float rampOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Grayscale_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Grayscale_1__Fields_FWDDECL
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_Grayscale_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grayscale_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Grayscale_1__Fields_FWDDECL)
#include <Modloader/app/structs/Grayscale_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Grayscale_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
