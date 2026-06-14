#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterByRefUpdater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterByRefUpdater_DEFINED)
#include <Modloader/app/structs/ParameterByRefUpdater__Fields.h>
#if defined(IL2CPP_STRUCT_ParameterByRefUpdater__Fields_DEFINED)
#define IL2CPP_STRUCT_ParameterByRefUpdater_DEFINED
struct ParameterByRefUpdater__Class;
struct ParameterByRefUpdater {
    struct ParameterByRefUpdater__Class* klass;
    MonitorData* monitor;
    struct ParameterByRefUpdater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParameterByRefUpdater_FWDDECL)
#define IL2CPP_STRUCT_ParameterByRefUpdater_FWDDECL
#include <Modloader/app/structs/ParameterByRefUpdater__Class.h>
#endif
#undef IL2CPP_STRUCT_ParameterByRefUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterByRefUpdater_DEFINED) && !defined(IL2CPP_STRUCT_ParameterByRefUpdater_FWDDECL)
#include <Modloader/app/structs/ParameterByRefUpdater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterByRefUpdater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
