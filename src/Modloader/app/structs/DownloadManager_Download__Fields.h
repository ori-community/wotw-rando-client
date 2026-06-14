#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadManager_Download__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadManager_Download__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadManager_Download__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadManager_Download__Fields_DEFINED
struct Browser;
struct String;
struct __declspec(align(8)) DownloadManager_Download__Fields {
    struct Browser* browser;
    int32_t downloadId;
    struct String* name;
    struct String* path;
    int32_t speed;
    int32_t percent;
    struct String* status;
};
#endif
#if !defined(IL2CPP_STRUCT_DownloadManager_Download__Fields_FWDDECL)
#define IL2CPP_STRUCT_DownloadManager_Download__Fields_FWDDECL
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DownloadManager_Download__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadManager_Download__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DownloadManager_Download__Fields_FWDDECL)
#include <Modloader/app/structs/DownloadManager_Download__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadManager_Download__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
