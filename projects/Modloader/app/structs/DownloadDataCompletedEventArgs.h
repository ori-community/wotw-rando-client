#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadDataCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadDataCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadDataCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/DownloadDataCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadDataCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadDataCompletedEventArgs_DEFINED
struct DownloadDataCompletedEventArgs__Class;
struct DownloadDataCompletedEventArgs {
    struct DownloadDataCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct DownloadDataCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadDataCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DownloadDataCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/DownloadDataCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadDataCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadDataCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DownloadDataCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/DownloadDataCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadDataCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
