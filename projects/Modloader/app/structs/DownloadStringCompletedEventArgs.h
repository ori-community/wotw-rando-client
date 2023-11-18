#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadStringCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadStringCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadStringCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/DownloadStringCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadStringCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadStringCompletedEventArgs_DEFINED
struct DownloadStringCompletedEventArgs__Class;
struct DownloadStringCompletedEventArgs {
    struct DownloadStringCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct DownloadStringCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadStringCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_DownloadStringCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/DownloadStringCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadStringCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadStringCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_DownloadStringCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/DownloadStringCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadStringCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
