#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsCipherSuite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsCipherSuite_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsCipherSuite_DEFINED)
#include <Modloader/app/structs/TlsCipherSuite__Fields.h>
#if defined(IL2CPP_STRUCT_TlsCipherSuite__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsCipherSuite_DEFINED
struct TlsCipherSuite__Class;
struct TlsCipherSuite {
    struct TlsCipherSuite__Class* klass;
    MonitorData* monitor;
    struct TlsCipherSuite__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsCipherSuite_FWDDECL)
#define IL2CPP_STRUCT_TlsCipherSuite_FWDDECL
#include <Modloader/app/structs/TlsCipherSuite__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsCipherSuite_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsCipherSuite_DEFINED) && !defined(IL2CPP_STRUCT_TlsCipherSuite_FWDDECL)
#include <Modloader/app/structs/TlsCipherSuite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsCipherSuite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
