#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ByRefUpdater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefUpdater_DEFINED)
#include <Modloader/app/structs/ByRefUpdater__Fields.h>
#if defined(IL2CPP_STRUCT_ByRefUpdater__Fields_DEFINED)
#define IL2CPP_STRUCT_ByRefUpdater_DEFINED
struct ByRefUpdater__Class;
struct ByRefUpdater {
    struct ByRefUpdater__Class* klass;
    MonitorData* monitor;
    struct ByRefUpdater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ByRefUpdater_FWDDECL)
#define IL2CPP_STRUCT_ByRefUpdater_FWDDECL
#include <Modloader/app/structs/ByRefUpdater__Class.h>
#endif
#undef IL2CPP_STRUCT_ByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_ByRefUpdater_DEFINED) && !defined(IL2CPP_STRUCT_ByRefUpdater_FWDDECL)
#include <Modloader/app/structs/ByRefUpdater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ByRefUpdater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
