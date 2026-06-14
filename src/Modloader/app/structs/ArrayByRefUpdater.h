#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArrayByRefUpdater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArrayByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayByRefUpdater_DEFINED)
#include <Modloader/app/structs/ArrayByRefUpdater__Fields.h>
#if defined(IL2CPP_STRUCT_ArrayByRefUpdater__Fields_DEFINED)
#define IL2CPP_STRUCT_ArrayByRefUpdater_DEFINED
struct ArrayByRefUpdater__Class;
struct ArrayByRefUpdater {
    struct ArrayByRefUpdater__Class* klass;
    MonitorData* monitor;
    struct ArrayByRefUpdater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArrayByRefUpdater_FWDDECL)
#define IL2CPP_STRUCT_ArrayByRefUpdater_FWDDECL
#include <Modloader/app/structs/ArrayByRefUpdater__Class.h>
#endif
#undef IL2CPP_STRUCT_ArrayByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArrayByRefUpdater_DEFINED) && !defined(IL2CPP_STRUCT_ArrayByRefUpdater_FWDDECL)
#include <Modloader/app/structs/ArrayByRefUpdater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArrayByRefUpdater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
