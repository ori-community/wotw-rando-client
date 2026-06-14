#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateSharedGroupResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateSharedGroupResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSharedGroupResult_DEFINED)
#include <Modloader/app/structs/CreateSharedGroupResult__Fields.h>
#if defined(IL2CPP_STRUCT_CreateSharedGroupResult__Fields_DEFINED)
#define IL2CPP_STRUCT_CreateSharedGroupResult_DEFINED
struct CreateSharedGroupResult__Class;
struct CreateSharedGroupResult {
    struct CreateSharedGroupResult__Class* klass;
    MonitorData* monitor;
    struct CreateSharedGroupResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateSharedGroupResult_FWDDECL)
#define IL2CPP_STRUCT_CreateSharedGroupResult_FWDDECL
#include <Modloader/app/structs/CreateSharedGroupResult__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateSharedGroupResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSharedGroupResult_DEFINED) && !defined(IL2CPP_STRUCT_CreateSharedGroupResult_FWDDECL)
#include <Modloader/app/structs/CreateSharedGroupResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateSharedGroupResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
