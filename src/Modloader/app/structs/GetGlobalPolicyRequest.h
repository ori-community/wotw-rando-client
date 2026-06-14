#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetGlobalPolicyRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetGlobalPolicyRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGlobalPolicyRequest_DEFINED)
#include <Modloader/app/structs/GetGlobalPolicyRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetGlobalPolicyRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetGlobalPolicyRequest_DEFINED
struct GetGlobalPolicyRequest__Class;
struct GetGlobalPolicyRequest {
    struct GetGlobalPolicyRequest__Class* klass;
    MonitorData* monitor;
    struct GetGlobalPolicyRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetGlobalPolicyRequest_FWDDECL)
#define IL2CPP_STRUCT_GetGlobalPolicyRequest_FWDDECL
#include <Modloader/app/structs/GetGlobalPolicyRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetGlobalPolicyRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGlobalPolicyRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetGlobalPolicyRequest_FWDDECL)
#include <Modloader/app/structs/GetGlobalPolicyRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetGlobalPolicyRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
