#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastVignette__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastVignette__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastVignette__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/FastVignette_ColorMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_FastVignette_ColorMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_FastVignette__Fields_DEFINED
struct FastVignette__Fields {
    struct BaseEffect__Fields _;
    FastVignette_ColorMode__Enum Mode;

    struct Color Color;
    struct Vector2 Center;
    float Sharpness;
    float Darkness;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FastVignette__Fields_FWDDECL)
#define IL2CPP_STRUCT_FastVignette__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FastVignette__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastVignette__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FastVignette__Fields_FWDDECL)
#include <Modloader/app/structs/FastVignette__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastVignette__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
