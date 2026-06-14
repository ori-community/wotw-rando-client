#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadProgressChangedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadProgressChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadProgressChangedEventHandler_DEFINED)
#include <Modloader/app/structs/UploadProgressChangedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_UploadProgressChangedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadProgressChangedEventHandler_DEFINED
struct UploadProgressChangedEventHandler__Class;
struct UploadProgressChangedEventHandler {
    struct UploadProgressChangedEventHandler__Class* klass;
    MonitorData* monitor;
    struct UploadProgressChangedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadProgressChangedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_UploadProgressChangedEventHandler_FWDDECL
#include <Modloader/app/structs/UploadProgressChangedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadProgressChangedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadProgressChangedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_UploadProgressChangedEventHandler_FWDDECL)
#include <Modloader/app/structs/UploadProgressChangedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadProgressChangedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
