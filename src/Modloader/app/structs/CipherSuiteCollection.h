#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CipherSuiteCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CipherSuiteCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherSuiteCollection_DEFINED)
#include <Modloader/app/structs/CipherSuiteCollection__Fields.h>
#if defined(IL2CPP_STRUCT_CipherSuiteCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_CipherSuiteCollection_DEFINED
struct CipherSuiteCollection__Class;
struct CipherSuiteCollection {
    struct CipherSuiteCollection__Class* klass;
    MonitorData* monitor;
    struct CipherSuiteCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CipherSuiteCollection_FWDDECL)
#define IL2CPP_STRUCT_CipherSuiteCollection_FWDDECL
#include <Modloader/app/structs/CipherSuiteCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_CipherSuiteCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherSuiteCollection_DEFINED) && !defined(IL2CPP_STRUCT_CipherSuiteCollection_FWDDECL)
#include <Modloader/app/structs/CipherSuiteCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CipherSuiteCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
