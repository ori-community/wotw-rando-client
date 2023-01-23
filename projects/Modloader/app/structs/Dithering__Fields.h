#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dithering__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dithering__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dithering__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_Dithering__Fields_DEFINED
struct Texture2D;
struct Dithering__Fields {
    struct BaseEffect__Fields _;
    bool ShowOriginal;
    bool ConvertToGrayscale;
    float RedLuminance;
    float GreenLuminance;
    float BlueLuminance;
    float Amount;
    struct Texture2D* m_DitherPattern;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dithering__Fields_FWDDECL)
#define IL2CPP_STRUCT_Dithering__Fields_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Dithering__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dithering__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Dithering__Fields_FWDDECL)
#include <Modloader/app/structs/Dithering__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dithering__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
