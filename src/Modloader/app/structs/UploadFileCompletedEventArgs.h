#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadFileCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadFileCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadFileCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/UploadFileCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UploadFileCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadFileCompletedEventArgs_DEFINED
struct UploadFileCompletedEventArgs__Class;
struct UploadFileCompletedEventArgs {
    struct UploadFileCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct UploadFileCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadFileCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UploadFileCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/UploadFileCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadFileCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadFileCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UploadFileCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/UploadFileCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadFileCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
