#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolSettings_DEFINED)
#include <Modloader/app/structs/UberPoolSettings__Fields.h>
#if defined(IL2CPP_STRUCT_UberPoolSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolSettings_DEFINED
struct UberPoolSettings__Class;
struct UberPoolSettings {
    struct UberPoolSettings__Class* klass;
    MonitorData* monitor;
    struct UberPoolSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolSettings_FWDDECL)
#define IL2CPP_STRUCT_UberPoolSettings_FWDDECL
#include <Modloader/app/structs/UberPoolSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_UberPoolSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolSettings_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolSettings_FWDDECL)
#include <Modloader/app/structs/UberPoolSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
