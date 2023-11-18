#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCGradient__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCGradient__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCGradient__Fields_DEFINED)
#include <Modloader/app/structs/CCGradient_InterpolationMode__Enum.h>
#include <Modloader/app/structs/CCGradient_WrapMode__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_CCGradient_InterpolationMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_CCGradient_WrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CCGradient__Fields_DEFINED
struct Color__Array;
struct Single__Array;
struct CCGradient__Fields {
    struct ScriptableObject__Fields _;
    CCGradient_InterpolationMode__Enum interpolation;

    CCGradient_WrapMode__Enum wrap;

    struct Color__Array* colors;
    struct Single__Array* positions;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCGradient__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCGradient__Fields_FWDDECL
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_CCGradient__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCGradient__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCGradient__Fields_FWDDECL)
#include <Modloader/app/structs/CCGradient__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCGradient__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
