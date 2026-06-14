#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmissiveSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmissiveSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissiveSettings__Fields_DEFINED)
#include <Modloader/app/structs/EmissiveIndividualSettings.h>
#if defined(IL2CPP_STRUCT_EmissiveIndividualSettings_DEFINED)
#define IL2CPP_STRUCT_EmissiveSettings__Fields_DEFINED
struct __declspec(align(8)) EmissiveSettings__Fields {
    struct EmissiveIndividualSettings Emissive1;
    struct EmissiveIndividualSettings Emissive2;
    struct EmissiveIndividualSettings Emissive3;
    struct EmissiveIndividualSettings Emissive4;
    struct EmissiveIndividualSettings OriEmissiveSettingsMultiplier;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmissiveSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_EmissiveSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EmissiveSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissiveSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EmissiveSettings__Fields_FWDDECL)
#include <Modloader/app/structs/EmissiveSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmissiveSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
