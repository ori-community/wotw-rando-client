#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadManager_Download_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadManager_Download_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadManager_Download_DEFINED)
#include <Modloader/app/structs/DownloadManager_Download__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadManager_Download__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadManager_Download_DEFINED
struct DownloadManager_Download__Class;
struct DownloadManager_Download {
    struct DownloadManager_Download__Class* klass;
    MonitorData* monitor;
    struct DownloadManager_Download__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadManager_Download_FWDDECL)
#define IL2CPP_STRUCT_DownloadManager_Download_FWDDECL
#include <Modloader/app/structs/DownloadManager_Download__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadManager_Download_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadManager_Download_DEFINED) && !defined(IL2CPP_STRUCT_DownloadManager_Download_FWDDECL)
#include <Modloader/app/structs/DownloadManager_Download.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadManager_Download.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
