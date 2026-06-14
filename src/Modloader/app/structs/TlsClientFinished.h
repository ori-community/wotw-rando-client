#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TlsClientFinished_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TlsClientFinished_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientFinished_DEFINED)
#include <Modloader/app/structs/TlsClientFinished__Fields.h>
#if defined(IL2CPP_STRUCT_TlsClientFinished__Fields_DEFINED)
#define IL2CPP_STRUCT_TlsClientFinished_DEFINED
struct TlsClientFinished__Class;
struct TlsClientFinished {
    struct TlsClientFinished__Class* klass;
    MonitorData* monitor;
    struct TlsClientFinished__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TlsClientFinished_FWDDECL)
#define IL2CPP_STRUCT_TlsClientFinished_FWDDECL
#include <Modloader/app/structs/TlsClientFinished__Class.h>
#endif
#undef IL2CPP_STRUCT_TlsClientFinished_INITIALIZING
#if !defined(IL2CPP_STRUCT_TlsClientFinished_DEFINED) && !defined(IL2CPP_STRUCT_TlsClientFinished_FWDDECL)
#include <Modloader/app/structs/TlsClientFinished.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TlsClientFinished.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
