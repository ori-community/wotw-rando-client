#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DownloadStringCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DownloadStringCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadStringCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/DownloadStringCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DownloadStringCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DownloadStringCompletedEventHandler_DEFINED
struct DownloadStringCompletedEventHandler__Class;
struct DownloadStringCompletedEventHandler {
    struct DownloadStringCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct DownloadStringCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DownloadStringCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_DownloadStringCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/DownloadStringCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DownloadStringCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DownloadStringCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_DownloadStringCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/DownloadStringCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DownloadStringCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
