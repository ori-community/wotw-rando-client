#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CipherSuite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CipherSuite_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherSuite_DEFINED)
#include <Modloader/app/structs/CipherSuite__Fields.h>
#if defined(IL2CPP_STRUCT_CipherSuite__Fields_DEFINED)
#define IL2CPP_STRUCT_CipherSuite_DEFINED
struct CipherSuite__Class;
struct CipherSuite {
    struct CipherSuite__Class* klass;
    MonitorData* monitor;
    struct CipherSuite__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CipherSuite_FWDDECL)
#define IL2CPP_STRUCT_CipherSuite_FWDDECL
#include <Modloader/app/structs/CipherSuite__Class.h>
#endif
#undef IL2CPP_STRUCT_CipherSuite_INITIALIZING
#if !defined(IL2CPP_STRUCT_CipherSuite_DEFINED) && !defined(IL2CPP_STRUCT_CipherSuite_FWDDECL)
#include <Modloader/app/structs/CipherSuite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CipherSuite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
