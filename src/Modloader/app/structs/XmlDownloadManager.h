#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlDownloadManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlDownloadManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDownloadManager_DEFINED)
#include <Modloader/app/structs/XmlDownloadManager__Fields.h>
#if defined(IL2CPP_STRUCT_XmlDownloadManager__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlDownloadManager_DEFINED
struct XmlDownloadManager__Class;
struct XmlDownloadManager {
    struct XmlDownloadManager__Class* klass;
    MonitorData* monitor;
    struct XmlDownloadManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlDownloadManager_FWDDECL)
#define IL2CPP_STRUCT_XmlDownloadManager_FWDDECL
#include <Modloader/app/structs/XmlDownloadManager__Class.h>
#endif
#undef IL2CPP_STRUCT_XmlDownloadManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlDownloadManager_DEFINED) && !defined(IL2CPP_STRUCT_XmlDownloadManager_FWDDECL)
#include <Modloader/app/structs/XmlDownloadManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlDownloadManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
