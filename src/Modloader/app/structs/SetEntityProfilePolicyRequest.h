#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetEntityProfilePolicyRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetEntityProfilePolicyRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetEntityProfilePolicyRequest_DEFINED)
#include <Modloader/app/structs/SetEntityProfilePolicyRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetEntityProfilePolicyRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetEntityProfilePolicyRequest_DEFINED
struct SetEntityProfilePolicyRequest__Class;
struct SetEntityProfilePolicyRequest {
    struct SetEntityProfilePolicyRequest__Class* klass;
    MonitorData* monitor;
    struct SetEntityProfilePolicyRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetEntityProfilePolicyRequest_FWDDECL)
#define IL2CPP_STRUCT_SetEntityProfilePolicyRequest_FWDDECL
#include <Modloader/app/structs/SetEntityProfilePolicyRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetEntityProfilePolicyRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetEntityProfilePolicyRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetEntityProfilePolicyRequest_FWDDECL)
#include <Modloader/app/structs/SetEntityProfilePolicyRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetEntityProfilePolicyRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
