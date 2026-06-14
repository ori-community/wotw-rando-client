#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AuthenticationManager__StaticFields_DEFINED
struct ArrayList;
struct Object;
struct ICredentialPolicy;
struct AuthenticationManager__StaticFields {
    struct ArrayList* modules;
    struct Object* locker;
    struct ICredentialPolicy* credential_policy;
};
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationManager__StaticFields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/ICredentialPolicy.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_AuthenticationManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/AuthenticationManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
