#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddMembersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddMembersRequest_DEFINED)
#include <Modloader/app/structs/AddMembersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AddMembersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AddMembersRequest_DEFINED
struct AddMembersRequest__Class;
struct AddMembersRequest {
    struct AddMembersRequest__Class* klass;
    MonitorData* monitor;
    struct AddMembersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddMembersRequest_FWDDECL)
#define IL2CPP_STRUCT_AddMembersRequest_FWDDECL
#include <Modloader/app/structs/AddMembersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AddMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddMembersRequest_DEFINED) && !defined(IL2CPP_STRUCT_AddMembersRequest_FWDDECL)
#include <Modloader/app/structs/AddMembersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddMembersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
