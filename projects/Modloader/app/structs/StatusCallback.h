#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StatusCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StatusCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatusCallback_DEFINED)
#include <Modloader/app/structs/StatusCallback__Fields.h>
#if defined(IL2CPP_STRUCT_StatusCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_StatusCallback_DEFINED
struct StatusCallback__Class;
struct StatusCallback {
    struct StatusCallback__Class* klass;
    MonitorData* monitor;
    struct StatusCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StatusCallback_FWDDECL)
#define IL2CPP_STRUCT_StatusCallback_FWDDECL
#include <Modloader/app/structs/StatusCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_StatusCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_StatusCallback_DEFINED) && !defined(IL2CPP_STRUCT_StatusCallback_FWDDECL)
#include <Modloader/app/structs/StatusCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StatusCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
