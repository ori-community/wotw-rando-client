#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveMembersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveMembersRequest_DEFINED)
#include <Modloader/app/structs/RemoveMembersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveMembersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveMembersRequest_DEFINED
struct RemoveMembersRequest__Class;
struct RemoveMembersRequest {
    struct RemoveMembersRequest__Class* klass;
    MonitorData* monitor;
    struct RemoveMembersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveMembersRequest_FWDDECL)
#define IL2CPP_STRUCT_RemoveMembersRequest_FWDDECL
#include <Modloader/app/structs/RemoveMembersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveMembersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveMembersRequest_DEFINED) && !defined(IL2CPP_STRUCT_RemoveMembersRequest_FWDDECL)
#include <Modloader/app/structs/RemoveMembersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveMembersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
