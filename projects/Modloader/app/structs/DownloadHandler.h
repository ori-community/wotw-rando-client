#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadHandler_DEFINED)
#include <Modloader/app/structs/DownloadHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadHandler_DEFINED
struct DownloadHandler__Class;
struct DownloadHandler {
    struct DownloadHandler__Class* klass;
    MonitorData* monitor;
    struct DownloadHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadHandler_FWDDECL)
#define IL2CPP_STRUCT_DownloadHandler_FWDDECL
#include <Modloader/app/structs/DownloadHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadHandler_DEFINED) && !defined(IL2CPP_STRUCT_DownloadHandler_FWDDECL)
#include <Modloader/app/structs/DownloadHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
