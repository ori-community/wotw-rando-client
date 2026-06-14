#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_DEFINED)
#define IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_DEFINED
struct HttpListenerResponse;
struct StreamWriter;
struct __declspec(align(8)) TestDownloadServer_c_DisplayClass5_0__Fields {
    struct HttpListenerResponse* res;
    struct StreamWriter* output;
};
#endif
#if !defined(IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_FWDDECL)
#define IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_FWDDECL
#include <Modloader/app/structs/HttpListenerResponse.h>
#include <Modloader/app/structs/StreamWriter.h>
#endif
#undef IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TestDownloadServer_c_DisplayClass5_0__Fields_FWDDECL)
#include <Modloader/app/structs/TestDownloadServer_c_DisplayClass5_0__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestDownloadServer_c_DisplayClass5_0__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
