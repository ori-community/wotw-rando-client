#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadHandlerAssetBundle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadHandlerAssetBundle_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadHandlerAssetBundle_DEFINED)
#include <Modloader/app/structs/DownloadHandlerAssetBundle__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadHandlerAssetBundle__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadHandlerAssetBundle_DEFINED
struct DownloadHandlerAssetBundle__Class;
struct DownloadHandlerAssetBundle {
    struct DownloadHandlerAssetBundle__Class* klass;
    MonitorData* monitor;
    struct DownloadHandlerAssetBundle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadHandlerAssetBundle_FWDDECL)
#define IL2CPP_STRUCT_DownloadHandlerAssetBundle_FWDDECL
#include <Modloader/app/structs/DownloadHandlerAssetBundle__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadHandlerAssetBundle_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadHandlerAssetBundle_DEFINED) && !defined(IL2CPP_STRUCT_DownloadHandlerAssetBundle_FWDDECL)
#include <Modloader/app/structs/DownloadHandlerAssetBundle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadHandlerAssetBundle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
