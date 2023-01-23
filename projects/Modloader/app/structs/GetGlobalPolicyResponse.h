#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetGlobalPolicyResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetGlobalPolicyResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGlobalPolicyResponse_DEFINED)
#include <Modloader/app/structs/GetGlobalPolicyResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetGlobalPolicyResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetGlobalPolicyResponse_DEFINED
struct GetGlobalPolicyResponse__Class;
struct GetGlobalPolicyResponse {
    struct GetGlobalPolicyResponse__Class* klass;
    MonitorData* monitor;
    struct GetGlobalPolicyResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetGlobalPolicyResponse_FWDDECL)
#define IL2CPP_STRUCT_GetGlobalPolicyResponse_FWDDECL
#include <Modloader/app/structs/GetGlobalPolicyResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetGlobalPolicyResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetGlobalPolicyResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetGlobalPolicyResponse_FWDDECL)
#include <Modloader/app/structs/GetGlobalPolicyResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetGlobalPolicyResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
