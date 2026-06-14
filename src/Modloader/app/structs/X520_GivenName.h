#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_GivenName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_GivenName_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_GivenName_DEFINED)
#include <Modloader/app/structs/X520_GivenName__Fields.h>
#if defined(IL2CPP_STRUCT_X520_GivenName__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_GivenName_DEFINED
struct X520_GivenName__Class;
struct X520_GivenName {
    struct X520_GivenName__Class* klass;
    MonitorData* monitor;
    struct X520_GivenName__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_GivenName_FWDDECL)
#define IL2CPP_STRUCT_X520_GivenName_FWDDECL
#include <Modloader/app/structs/X520_GivenName__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_GivenName_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_GivenName_DEFINED) && !defined(IL2CPP_STRUCT_X520_GivenName_FWDDECL)
#include <Modloader/app/structs/X520_GivenName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_GivenName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
