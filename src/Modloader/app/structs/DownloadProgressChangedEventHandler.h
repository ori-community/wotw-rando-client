#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadProgressChangedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadProgressChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventHandler_DEFINED)
#include <Modloader/app/structs/DownloadProgressChangedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadProgressChangedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadProgressChangedEventHandler_DEFINED
struct DownloadProgressChangedEventHandler__Class;
struct DownloadProgressChangedEventHandler {
    struct DownloadProgressChangedEventHandler__Class* klass;
    MonitorData* monitor;
    struct DownloadProgressChangedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DownloadProgressChangedEventHandler_FWDDECL
#include <Modloader/app/structs/DownloadProgressChangedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadProgressChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DownloadProgressChangedEventHandler_FWDDECL)
#include <Modloader/app/structs/DownloadProgressChangedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadProgressChangedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
