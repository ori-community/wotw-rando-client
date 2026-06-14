#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastSettings_DEFINED)
#include <Modloader/app/structs/ContrastSettings__Fields.h>
#if defined(IL2CPP_STRUCT_ContrastSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastSettings_DEFINED
struct ContrastSettings__Class;
struct ContrastSettings {
    struct ContrastSettings__Class* klass;
    MonitorData* monitor;
    struct ContrastSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastSettings_FWDDECL)
#define IL2CPP_STRUCT_ContrastSettings_FWDDECL
#include <Modloader/app/structs/ContrastSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_ContrastSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastSettings_DEFINED) && !defined(IL2CPP_STRUCT_ContrastSettings_FWDDECL)
#include <Modloader/app/structs/ContrastSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
