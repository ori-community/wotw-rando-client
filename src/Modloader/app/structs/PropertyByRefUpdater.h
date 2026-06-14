#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyByRefUpdater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyByRefUpdater_DEFINED)
#include <Modloader/app/structs/PropertyByRefUpdater__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyByRefUpdater__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyByRefUpdater_DEFINED
struct PropertyByRefUpdater__Class;
struct PropertyByRefUpdater {
    struct PropertyByRefUpdater__Class* klass;
    MonitorData* monitor;
    struct PropertyByRefUpdater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyByRefUpdater_FWDDECL)
#define IL2CPP_STRUCT_PropertyByRefUpdater_FWDDECL
#include <Modloader/app/structs/PropertyByRefUpdater__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyByRefUpdater_DEFINED) && !defined(IL2CPP_STRUCT_PropertyByRefUpdater_FWDDECL)
#include <Modloader/app/structs/PropertyByRefUpdater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyByRefUpdater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
