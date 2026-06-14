#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Strokes__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Strokes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Strokes__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Strokes_ColorMode__Enum.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Strokes_ColorMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Strokes__Fields_DEFINED
struct Strokes__Fields {
    struct BaseEffect__Fields _;
    Strokes_ColorMode__Enum Mode;

    float Amplitude;
    float Frequency;
    float Scaling;
    float MaxThickness;
    float Threshold;
    float Harshness;
    float RedLuminance;
    float GreenLuminance;
    float BlueLuminance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Strokes__Fields_FWDDECL)
#define IL2CPP_STRUCT_Strokes__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Strokes__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Strokes__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Strokes__Fields_FWDDECL)
#include <Modloader/app/structs/Strokes__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Strokes__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
