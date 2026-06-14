#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGlobalPolicyRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGlobalPolicyRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGlobalPolicyRequest_DEFINED)
#include <Modloader/app/structs/SetGlobalPolicyRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetGlobalPolicyRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGlobalPolicyRequest_DEFINED
struct SetGlobalPolicyRequest__Class;
struct SetGlobalPolicyRequest {
    struct SetGlobalPolicyRequest__Class* klass;
    MonitorData* monitor;
    struct SetGlobalPolicyRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGlobalPolicyRequest_FWDDECL)
#define IL2CPP_STRUCT_SetGlobalPolicyRequest_FWDDECL
#include <Modloader/app/structs/SetGlobalPolicyRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGlobalPolicyRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGlobalPolicyRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetGlobalPolicyRequest_FWDDECL)
#include <Modloader/app/structs/SetGlobalPolicyRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGlobalPolicyRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
