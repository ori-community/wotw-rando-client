#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastSettings__Fields_DEFINED
struct __declspec(align(8)) ContrastSettings__Fields {
    float Brightness;
    float Contrast;
    float _DebugOverrideContrast_k__BackingField;
    float _DebugOverrideBrightness_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_ContrastSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContrastSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContrastSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContrastSettings__Fields_FWDDECL)
#include <Modloader/app/structs/ContrastSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
