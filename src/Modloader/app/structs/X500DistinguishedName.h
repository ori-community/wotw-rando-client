#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X500DistinguishedName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X500DistinguishedName_INITIALIZING
#if !defined(IL2CPP_STRUCT_X500DistinguishedName_DEFINED)
#include <Modloader/app/structs/X500DistinguishedName__Fields.h>
#if defined(IL2CPP_STRUCT_X500DistinguishedName__Fields_DEFINED)
#define IL2CPP_STRUCT_X500DistinguishedName_DEFINED
struct X500DistinguishedName__Class;
struct X500DistinguishedName {
    struct X500DistinguishedName__Class* klass;
    MonitorData* monitor;
    struct X500DistinguishedName__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X500DistinguishedName_FWDDECL)
#define IL2CPP_STRUCT_X500DistinguishedName_FWDDECL
#include <Modloader/app/structs/X500DistinguishedName__Class.h>
#endif
#undef IL2CPP_STRUCT_X500DistinguishedName_INITIALIZING
#if !defined(IL2CPP_STRUCT_X500DistinguishedName_DEFINED) && !defined(IL2CPP_STRUCT_X500DistinguishedName_FWDDECL)
#include <Modloader/app/structs/X500DistinguishedName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X500DistinguishedName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
