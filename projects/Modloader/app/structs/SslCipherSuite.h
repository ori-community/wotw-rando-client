#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SslCipherSuite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SslCipherSuite_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslCipherSuite_DEFINED)
#include <Modloader/app/structs/SslCipherSuite__Fields.h>
#if defined(IL2CPP_STRUCT_SslCipherSuite__Fields_DEFINED)
#define IL2CPP_STRUCT_SslCipherSuite_DEFINED
struct SslCipherSuite__Class;
struct SslCipherSuite {
    struct SslCipherSuite__Class* klass;
    MonitorData* monitor;
    struct SslCipherSuite__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SslCipherSuite_FWDDECL)
#define IL2CPP_STRUCT_SslCipherSuite_FWDDECL
#include <Modloader/app/structs/SslCipherSuite__Class.h>
#endif
#undef IL2CPP_STRUCT_SslCipherSuite_INITIALIZING
#if !defined(IL2CPP_STRUCT_SslCipherSuite_DEFINED) && !defined(IL2CPP_STRUCT_SslCipherSuite_FWDDECL)
#include <Modloader/app/structs/SslCipherSuite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SslCipherSuite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
