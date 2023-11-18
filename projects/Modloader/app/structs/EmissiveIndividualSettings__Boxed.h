#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_DEFINED)
#include <Modloader/app/structs/EmissiveIndividualSettings.h>
#if defined(IL2CPP_STRUCT_EmissiveIndividualSettings_DEFINED)
#define IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_DEFINED
struct EmissiveIndividualSettings__Class;
struct EmissiveIndividualSettings__Boxed {
    struct EmissiveIndividualSettings__Class* klass;
    MonitorData* monitor;
    struct EmissiveIndividualSettings fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_FWDDECL)
#define IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_FWDDECL
#include <Modloader/app/structs/EmissiveIndividualSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_EmissiveIndividualSettings__Boxed_FWDDECL)
#include <Modloader/app/structs/EmissiveIndividualSettings__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmissiveIndividualSettings__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
