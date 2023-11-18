#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X501__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X501__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X501__StaticFields_DEFINED)
#define IL2CPP_STRUCT_X501__StaticFields_DEFINED
struct Byte__Array;
struct X501__StaticFields {
    struct Byte__Array* countryName;
    struct Byte__Array* organizationName;
    struct Byte__Array* organizationalUnitName;
    struct Byte__Array* commonName;
    struct Byte__Array* localityName;
    struct Byte__Array* stateOrProvinceName;
    struct Byte__Array* streetAddress;
    struct Byte__Array* domainComponent;
    struct Byte__Array* userid;
    struct Byte__Array* email;
    struct Byte__Array* dnQualifier;
    struct Byte__Array* title;
    struct Byte__Array* surname;
    struct Byte__Array* givenName;
    struct Byte__Array* initial;
};
#endif
#if !defined(IL2CPP_STRUCT_X501__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_X501__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_X501__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_X501__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_X501__StaticFields_FWDDECL)
#include <Modloader/app/structs/X501__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X501__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
