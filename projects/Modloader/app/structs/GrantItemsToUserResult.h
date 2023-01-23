#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrantItemsToUserResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrantItemsToUserResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantItemsToUserResult_DEFINED)
#include <Modloader/app/structs/GrantItemsToUserResult__Fields.h>
#if defined(IL2CPP_STRUCT_GrantItemsToUserResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GrantItemsToUserResult_DEFINED
struct GrantItemsToUserResult__Class;
struct GrantItemsToUserResult {
    struct GrantItemsToUserResult__Class* klass;
    MonitorData* monitor;
    struct GrantItemsToUserResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrantItemsToUserResult_FWDDECL)
#define IL2CPP_STRUCT_GrantItemsToUserResult_FWDDECL
#include <Modloader/app/structs/GrantItemsToUserResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GrantItemsToUserResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrantItemsToUserResult_DEFINED) && !defined(IL2CPP_STRUCT_GrantItemsToUserResult_FWDDECL)
#include <Modloader/app/structs/GrantItemsToUserResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrantItemsToUserResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
