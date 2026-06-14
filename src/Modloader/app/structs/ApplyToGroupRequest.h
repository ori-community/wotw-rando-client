#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplyToGroupRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplyToGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyToGroupRequest_DEFINED)
#include <Modloader/app/structs/ApplyToGroupRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ApplyToGroupRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ApplyToGroupRequest_DEFINED
struct ApplyToGroupRequest__Class;
struct ApplyToGroupRequest {
    struct ApplyToGroupRequest__Class* klass;
    MonitorData* monitor;
    struct ApplyToGroupRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplyToGroupRequest_FWDDECL)
#define IL2CPP_STRUCT_ApplyToGroupRequest_FWDDECL
#include <Modloader/app/structs/ApplyToGroupRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplyToGroupRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyToGroupRequest_DEFINED) && !defined(IL2CPP_STRUCT_ApplyToGroupRequest_FWDDECL)
#include <Modloader/app/structs/ApplyToGroupRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplyToGroupRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
