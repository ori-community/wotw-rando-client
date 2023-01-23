#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddUsernamePasswordResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddUsernamePasswordResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddUsernamePasswordResult_DEFINED)
#include <Modloader/app/structs/AddUsernamePasswordResult__Fields.h>
#if defined(IL2CPP_STRUCT_AddUsernamePasswordResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AddUsernamePasswordResult_DEFINED
struct AddUsernamePasswordResult__Class;
struct AddUsernamePasswordResult {
    struct AddUsernamePasswordResult__Class* klass;
    MonitorData* monitor;
    struct AddUsernamePasswordResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddUsernamePasswordResult_FWDDECL)
#define IL2CPP_STRUCT_AddUsernamePasswordResult_FWDDECL
#include <Modloader/app/structs/AddUsernamePasswordResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AddUsernamePasswordResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddUsernamePasswordResult_DEFINED) && !defined(IL2CPP_STRUCT_AddUsernamePasswordResult_FWDDECL)
#include <Modloader/app/structs/AddUsernamePasswordResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddUsernamePasswordResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
