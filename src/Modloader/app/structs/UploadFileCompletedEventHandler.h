#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadFileCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadFileCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadFileCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/UploadFileCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_UploadFileCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadFileCompletedEventHandler_DEFINED
struct UploadFileCompletedEventHandler__Class;
struct UploadFileCompletedEventHandler {
    struct UploadFileCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct UploadFileCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadFileCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_UploadFileCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/UploadFileCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadFileCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadFileCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_UploadFileCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/UploadFileCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadFileCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
