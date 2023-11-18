#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldByRefUpdater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldByRefUpdater_DEFINED)
#include <Modloader/app/structs/FieldByRefUpdater__Fields.h>
#if defined(IL2CPP_STRUCT_FieldByRefUpdater__Fields_DEFINED)
#define IL2CPP_STRUCT_FieldByRefUpdater_DEFINED
struct FieldByRefUpdater__Class;
struct FieldByRefUpdater {
    struct FieldByRefUpdater__Class* klass;
    MonitorData* monitor;
    struct FieldByRefUpdater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FieldByRefUpdater_FWDDECL)
#define IL2CPP_STRUCT_FieldByRefUpdater_FWDDECL
#include <Modloader/app/structs/FieldByRefUpdater__Class.h>
#endif
#undef IL2CPP_STRUCT_FieldByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldByRefUpdater_DEFINED) && !defined(IL2CPP_STRUCT_FieldByRefUpdater_FWDDECL)
#include <Modloader/app/structs/FieldByRefUpdater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldByRefUpdater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
