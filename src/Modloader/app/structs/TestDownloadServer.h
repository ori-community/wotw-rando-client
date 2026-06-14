#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestDownloadServer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestDownloadServer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestDownloadServer_DEFINED)
#include <Modloader/app/structs/TestDownloadServer__Fields.h>
#if defined(IL2CPP_STRUCT_TestDownloadServer__Fields_DEFINED)
#define IL2CPP_STRUCT_TestDownloadServer_DEFINED
struct TestDownloadServer__Class;
struct TestDownloadServer {
    struct TestDownloadServer__Class* klass;
    MonitorData* monitor;
    struct TestDownloadServer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestDownloadServer_FWDDECL)
#define IL2CPP_STRUCT_TestDownloadServer_FWDDECL
#include <Modloader/app/structs/TestDownloadServer__Class.h>
#endif
#undef IL2CPP_STRUCT_TestDownloadServer_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestDownloadServer_DEFINED) && !defined(IL2CPP_STRUCT_TestDownloadServer_FWDDECL)
#include <Modloader/app/structs/TestDownloadServer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestDownloadServer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
