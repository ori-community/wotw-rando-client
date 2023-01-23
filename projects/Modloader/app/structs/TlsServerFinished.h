#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsServerFinished_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsServerFinished_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerFinished_DEFINED)
#include <Modloader/app/structs/TlsServerFinished__Fields.h>
#if defined(IL2CPP_STRUCT_TlsServerFinished__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsServerFinished_DEFINED
struct TlsServerFinished__Class;
struct TlsServerFinished {
    struct TlsServerFinished__Class* klass;
    MonitorData* monitor;
    struct TlsServerFinished__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsServerFinished_FWDDECL)
#define IL2CPP_STRUCT_TlsServerFinished_FWDDECL
#include <Modloader/app/structs/TlsServerFinished__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsServerFinished_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsServerFinished_DEFINED) && !defined(IL2CPP_STRUCT_TlsServerFinished_FWDDECL)
#include <Modloader/app/structs/TlsServerFinished.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsServerFinished.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
