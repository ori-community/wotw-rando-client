#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoginWithEmailAddressRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoginWithEmailAddressRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithEmailAddressRequest_DEFINED)
#include <Modloader/app/structs/LoginWithEmailAddressRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LoginWithEmailAddressRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LoginWithEmailAddressRequest_DEFINED
struct LoginWithEmailAddressRequest__Class;
struct LoginWithEmailAddressRequest {
    struct LoginWithEmailAddressRequest__Class* klass;
    MonitorData* monitor;
    struct LoginWithEmailAddressRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoginWithEmailAddressRequest_FWDDECL)
#define IL2CPP_STRUCT_LoginWithEmailAddressRequest_FWDDECL
#include <Modloader/app/structs/LoginWithEmailAddressRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LoginWithEmailAddressRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoginWithEmailAddressRequest_DEFINED) && !defined(IL2CPP_STRUCT_LoginWithEmailAddressRequest_FWDDECL)
#include <Modloader/app/structs/LoginWithEmailAddressRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoginWithEmailAddressRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
