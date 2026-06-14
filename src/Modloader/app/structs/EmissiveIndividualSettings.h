#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmissiveIndividualSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmissiveIndividualSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissiveIndividualSettings_DEFINED)
#define IL2CPP_STRUCT_EmissiveIndividualSettings_DEFINED
struct EmissiveIndividualSettings {
    float Intensity;
    float SpreadAmount;
};
#endif
#if !defined(IL2CPP_STRUCT_EmissiveIndividualSettings_FWDDECL)
#define IL2CPP_STRUCT_EmissiveIndividualSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_EmissiveIndividualSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissiveIndividualSettings_DEFINED) && !defined(IL2CPP_STRUCT_EmissiveIndividualSettings_FWDDECL)
#include <Modloader/app/structs/EmissiveIndividualSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmissiveIndividualSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
