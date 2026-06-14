#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadManager_DEFINED)
#include <Modloader/app/structs/DownloadManager__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadManager_DEFINED
struct DownloadManager__Class;
struct DownloadManager {
    struct DownloadManager__Class* klass;
    MonitorData* monitor;
    struct DownloadManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadManager_FWDDECL)
#define IL2CPP_STRUCT_DownloadManager_FWDDECL
#include <Modloader/app/structs/DownloadManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadManager_DEFINED) && !defined(IL2CPP_STRUCT_DownloadManager_FWDDECL)
#include <Modloader/app/structs/DownloadManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
