#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadDataCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadDataCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadDataCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/UploadDataCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_UploadDataCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadDataCompletedEventHandler_DEFINED
struct UploadDataCompletedEventHandler__Class;
struct UploadDataCompletedEventHandler {
    struct UploadDataCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct UploadDataCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadDataCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_UploadDataCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/UploadDataCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadDataCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadDataCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_UploadDataCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/UploadDataCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadDataCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
