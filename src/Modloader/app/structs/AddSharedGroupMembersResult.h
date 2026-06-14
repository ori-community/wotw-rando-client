#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddSharedGroupMembersResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddSharedGroupMembersResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddSharedGroupMembersResult_DEFINED)
#include <Modloader/app/structs/AddSharedGroupMembersResult__Fields.h>
#if defined(IL2CPP_STRUCT_AddSharedGroupMembersResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AddSharedGroupMembersResult_DEFINED
struct AddSharedGroupMembersResult__Class;
struct AddSharedGroupMembersResult {
    struct AddSharedGroupMembersResult__Class* klass;
    MonitorData* monitor;
    struct AddSharedGroupMembersResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddSharedGroupMembersResult_FWDDECL)
#define IL2CPP_STRUCT_AddSharedGroupMembersResult_FWDDECL
#include <Modloader/app/structs/AddSharedGroupMembersResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AddSharedGroupMembersResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddSharedGroupMembersResult_DEFINED) && !defined(IL2CPP_STRUCT_AddSharedGroupMembersResult_FWDDECL)
#include <Modloader/app/structs/AddSharedGroupMembersResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddSharedGroupMembersResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
