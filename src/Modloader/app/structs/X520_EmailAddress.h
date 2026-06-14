#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_EmailAddress_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_EmailAddress_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_EmailAddress_DEFINED)
#include <Modloader/app/structs/X520_EmailAddress__Fields.h>
#if defined(IL2CPP_STRUCT_X520_EmailAddress__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_EmailAddress_DEFINED
struct X520_EmailAddress__Class;
struct X520_EmailAddress {
    struct X520_EmailAddress__Class* klass;
    MonitorData* monitor;
    struct X520_EmailAddress__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_EmailAddress_FWDDECL)
#define IL2CPP_STRUCT_X520_EmailAddress_FWDDECL
#include <Modloader/app/structs/X520_EmailAddress__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_EmailAddress_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_EmailAddress_DEFINED) && !defined(IL2CPP_STRUCT_X520_EmailAddress_FWDDECL)
#include <Modloader/app/structs/X520_EmailAddress.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_EmailAddress.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
