#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadProgressChangedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadProgressChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadProgressChangedEventArgs_DEFINED)
#include <Modloader/app/structs/UploadProgressChangedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UploadProgressChangedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadProgressChangedEventArgs_DEFINED
struct UploadProgressChangedEventArgs__Class;
struct UploadProgressChangedEventArgs {
    struct UploadProgressChangedEventArgs__Class* klass;
    MonitorData* monitor;
    struct UploadProgressChangedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadProgressChangedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UploadProgressChangedEventArgs_FWDDECL
#include <Modloader/app/structs/UploadProgressChangedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadProgressChangedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadProgressChangedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UploadProgressChangedEventArgs_FWDDECL)
#include <Modloader/app/structs/UploadProgressChangedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadProgressChangedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
