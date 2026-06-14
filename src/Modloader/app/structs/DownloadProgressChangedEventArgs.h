#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadProgressChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadProgressChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs_DEFINED)
#include <Modloader/app/structs/DownloadProgressChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadProgressChangedEventArgs_DEFINED
struct DownloadProgressChangedEventArgs__Class;
struct DownloadProgressChangedEventArgs {
    struct DownloadProgressChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct DownloadProgressChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DownloadProgressChangedEventArgs_FWDDECL
#include <Modloader/app/structs/DownloadProgressChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadProgressChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DownloadProgressChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/DownloadProgressChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadProgressChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
