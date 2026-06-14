#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_CommonName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_CommonName_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_CommonName_DEFINED)
#include <Modloader/app/structs/X520_CommonName__Fields.h>
#if defined(IL2CPP_STRUCT_X520_CommonName__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_CommonName_DEFINED
struct X520_CommonName__Class;
struct X520_CommonName {
    struct X520_CommonName__Class* klass;
    MonitorData* monitor;
    struct X520_CommonName__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_CommonName_FWDDECL)
#define IL2CPP_STRUCT_X520_CommonName_FWDDECL
#include <Modloader/app/structs/X520_CommonName__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_CommonName_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_CommonName_DEFINED) && !defined(IL2CPP_STRUCT_X520_CommonName_FWDDECL)
#include <Modloader/app/structs/X520_CommonName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_CommonName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
