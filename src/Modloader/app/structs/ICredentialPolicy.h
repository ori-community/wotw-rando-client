#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICredentialPolicy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICredentialPolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICredentialPolicy_DEFINED)
#define IL2CPP_STRUCT_ICredentialPolicy_DEFINED
struct ICredentialPolicy__Class;
struct ICredentialPolicy {
    struct ICredentialPolicy__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICredentialPolicy_FWDDECL)
#define IL2CPP_STRUCT_ICredentialPolicy_FWDDECL
#include <Modloader/app/structs/ICredentialPolicy__Class.h>
#endif
#undef IL2CPP_STRUCT_ICredentialPolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICredentialPolicy_DEFINED) && !defined(IL2CPP_STRUCT_ICredentialPolicy_FWDDECL)
#include <Modloader/app/structs/ICredentialPolicy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICredentialPolicy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
