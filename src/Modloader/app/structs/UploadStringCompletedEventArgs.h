#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadStringCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadStringCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadStringCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/UploadStringCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UploadStringCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadStringCompletedEventArgs_DEFINED
struct UploadStringCompletedEventArgs__Class;
struct UploadStringCompletedEventArgs {
    struct UploadStringCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct UploadStringCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadStringCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UploadStringCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/UploadStringCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadStringCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadStringCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UploadStringCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/UploadStringCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadStringCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
