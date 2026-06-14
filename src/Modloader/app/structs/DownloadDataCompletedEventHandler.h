#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadDataCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadDataCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadDataCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/DownloadDataCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadDataCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadDataCompletedEventHandler_DEFINED
struct DownloadDataCompletedEventHandler__Class;
struct DownloadDataCompletedEventHandler {
    struct DownloadDataCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct DownloadDataCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadDataCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DownloadDataCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/DownloadDataCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadDataCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadDataCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DownloadDataCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/DownloadDataCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadDataCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
