#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetEntityProfilePolicyResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetEntityProfilePolicyResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetEntityProfilePolicyResponse_DEFINED)
#include <Modloader/app/structs/SetEntityProfilePolicyResponse__Fields.h>
#if defined(IL2CPP_STRUCT_SetEntityProfilePolicyResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_SetEntityProfilePolicyResponse_DEFINED
struct SetEntityProfilePolicyResponse__Class;
struct SetEntityProfilePolicyResponse {
    struct SetEntityProfilePolicyResponse__Class* klass;
    MonitorData* monitor;
    struct SetEntityProfilePolicyResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetEntityProfilePolicyResponse_FWDDECL)
#define IL2CPP_STRUCT_SetEntityProfilePolicyResponse_FWDDECL
#include <Modloader/app/structs/SetEntityProfilePolicyResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_SetEntityProfilePolicyResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetEntityProfilePolicyResponse_DEFINED) && !defined(IL2CPP_STRUCT_SetEntityProfilePolicyResponse_FWDDECL)
#include <Modloader/app/structs/SetEntityProfilePolicyResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetEntityProfilePolicyResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
