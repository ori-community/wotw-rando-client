#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadDataCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadDataCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadDataCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/UploadDataCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UploadDataCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadDataCompletedEventArgs_DEFINED
struct UploadDataCompletedEventArgs__Class;
struct UploadDataCompletedEventArgs {
    struct UploadDataCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct UploadDataCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadDataCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UploadDataCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/UploadDataCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadDataCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadDataCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UploadDataCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/UploadDataCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadDataCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
