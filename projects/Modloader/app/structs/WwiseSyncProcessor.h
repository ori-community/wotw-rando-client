#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseSyncProcessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseSyncProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor_DEFINED)
#include <Modloader/app/structs/WwiseSyncProcessor__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseSyncProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseSyncProcessor_DEFINED
struct WwiseSyncProcessor__Class;
struct WwiseSyncProcessor {
    struct WwiseSyncProcessor__Class* klass;
    MonitorData* monitor;
    struct WwiseSyncProcessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor_FWDDECL)
#define IL2CPP_STRUCT_WwiseSyncProcessor_FWDDECL
#include <Modloader/app/structs/WwiseSyncProcessor__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseSyncProcessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor_DEFINED) && !defined(IL2CPP_STRUCT_WwiseSyncProcessor_FWDDECL)
#include <Modloader/app/structs/WwiseSyncProcessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseSyncProcessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
