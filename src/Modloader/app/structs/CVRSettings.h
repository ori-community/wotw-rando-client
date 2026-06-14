#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSettings_DEFINED)
#include <Modloader/app/structs/CVRSettings__Fields.h>
#if defined(IL2CPP_STRUCT_CVRSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRSettings_DEFINED
struct CVRSettings__Class;
struct CVRSettings {
    struct CVRSettings__Class* klass;
    MonitorData* monitor;
    struct CVRSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRSettings_FWDDECL)
#define IL2CPP_STRUCT_CVRSettings_FWDDECL
#include <Modloader/app/structs/CVRSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSettings_DEFINED) && !defined(IL2CPP_STRUCT_CVRSettings_FWDDECL)
#include <Modloader/app/structs/CVRSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
