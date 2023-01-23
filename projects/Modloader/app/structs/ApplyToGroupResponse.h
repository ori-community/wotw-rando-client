#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplyToGroupResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplyToGroupResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyToGroupResponse_DEFINED)
#include <Modloader/app/structs/ApplyToGroupResponse__Fields.h>
#if defined(IL2CPP_STRUCT_ApplyToGroupResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_ApplyToGroupResponse_DEFINED
struct ApplyToGroupResponse__Class;
struct ApplyToGroupResponse {
    struct ApplyToGroupResponse__Class* klass;
    MonitorData* monitor;
    struct ApplyToGroupResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplyToGroupResponse_FWDDECL)
#define IL2CPP_STRUCT_ApplyToGroupResponse_FWDDECL
#include <Modloader/app/structs/ApplyToGroupResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplyToGroupResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyToGroupResponse_DEFINED) && !defined(IL2CPP_STRUCT_ApplyToGroupResponse_FWDDECL)
#include <Modloader/app/structs/ApplyToGroupResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplyToGroupResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
