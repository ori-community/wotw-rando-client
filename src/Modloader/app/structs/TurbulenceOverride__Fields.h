#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceOverride__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceOverride__Fields_DEFINED
struct TurbulenceSettings;
struct __declspec(align(8)) TurbulenceOverride__Fields {
    struct TurbulenceSettings* TurbulenceSettings;
    float TurbulenceStrengthMult;
    float TurbulenceSpeedMult;
};
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceOverride__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceOverride__Fields_FWDDECL
#include <Modloader/app/structs/TurbulenceSettings.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceOverride__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceOverride__Fields_FWDDECL)
#include <Modloader/app/structs/TurbulenceOverride__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceOverride__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
