#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Halftone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Halftone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Halftone__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Halftone__Fields_DEFINED
struct Halftone__Fields {
    struct BaseEffect__Fields _;
    float Scale;
    float DotSize;
    float Angle;
    float Smoothness;
    struct Vector2 Center;
    bool Desaturate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Halftone__Fields_FWDDECL)
#define IL2CPP_STRUCT_Halftone__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Halftone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Halftone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Halftone__Fields_FWDDECL)
#include <Modloader/app/structs/Halftone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Halftone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
