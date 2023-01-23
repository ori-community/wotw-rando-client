#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FogSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FogSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FogSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FogSettings__Fields_DEFINED
struct Gradient;
struct __declspec(align(8)) FogSettings__Fields {
    struct Gradient* Gradient;
    struct Gradient* MultiplyGradient;
    float Range;
};
#endif
#if !defined(IL2CPP_STRUCT_FogSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_FogSettings__Fields_FWDDECL
#include <Modloader/app/structs/Gradient.h>
#endif
#undef IL2CPP_STRUCT_FogSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FogSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FogSettings__Fields_FWDDECL)
#include <Modloader/app/structs/FogSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FogSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
