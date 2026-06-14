#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGlobalPolicyResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGlobalPolicyResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGlobalPolicyResponse_DEFINED)
#include <Modloader/app/structs/SetGlobalPolicyResponse__Fields.h>
#if defined(IL2CPP_STRUCT_SetGlobalPolicyResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGlobalPolicyResponse_DEFINED
struct SetGlobalPolicyResponse__Class;
struct SetGlobalPolicyResponse {
    struct SetGlobalPolicyResponse__Class* klass;
    MonitorData* monitor;
    struct SetGlobalPolicyResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGlobalPolicyResponse_FWDDECL)
#define IL2CPP_STRUCT_SetGlobalPolicyResponse_FWDDECL
#include <Modloader/app/structs/SetGlobalPolicyResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGlobalPolicyResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGlobalPolicyResponse_DEFINED) && !defined(IL2CPP_STRUCT_SetGlobalPolicyResponse_FWDDECL)
#include <Modloader/app/structs/SetGlobalPolicyResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGlobalPolicyResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
