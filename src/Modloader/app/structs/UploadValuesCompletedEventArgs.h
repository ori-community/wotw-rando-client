#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadValuesCompletedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadValuesCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs_DEFINED)
#include <Modloader/app/structs/UploadValuesCompletedEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadValuesCompletedEventArgs_DEFINED
struct UploadValuesCompletedEventArgs__Class;
struct UploadValuesCompletedEventArgs {
    struct UploadValuesCompletedEventArgs__Class* klass;
    MonitorData* monitor;
    struct UploadValuesCompletedEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UploadValuesCompletedEventArgs_FWDDECL
#include <Modloader/app/structs/UploadValuesCompletedEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadValuesCompletedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UploadValuesCompletedEventArgs_FWDDECL)
#include <Modloader/app/structs/UploadValuesCompletedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadValuesCompletedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
