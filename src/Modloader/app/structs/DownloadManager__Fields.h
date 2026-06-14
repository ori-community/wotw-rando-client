#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadManager__Fields_DEFINED
struct String;
struct Text;
struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_;
struct StringBuilder;
struct DownloadManager__Fields {
    struct MonoBehaviour__Fields _;
    bool manageAllBrowsers;
    bool promptForFileNames;
    struct String* saveFolder;
    struct Text* statusBar;
    struct List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_* downloads;
    struct StringBuilder* sb;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_DownloadManager__Fields_FWDDECL
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_DownloadManager_Download_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Text.h>
#endif
#undef IL2CPP_STRUCT_DownloadManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DownloadManager__Fields_FWDDECL)
#include <Modloader/app/structs/DownloadManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
