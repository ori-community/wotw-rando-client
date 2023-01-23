#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadStringCompletedEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadStringCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadStringCompletedEventHandler_DEFINED)
#include <Modloader/app/structs/UploadStringCompletedEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_UploadStringCompletedEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadStringCompletedEventHandler_DEFINED
struct UploadStringCompletedEventHandler__Class;
struct UploadStringCompletedEventHandler {
    struct UploadStringCompletedEventHandler__Class* klass;
    MonitorData* monitor;
    struct UploadStringCompletedEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadStringCompletedEventHandler_FWDDECL)
#define IL2CPP_STRUCT_UploadStringCompletedEventHandler_FWDDECL
#include <Modloader/app/structs/UploadStringCompletedEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadStringCompletedEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadStringCompletedEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_UploadStringCompletedEventHandler_FWDDECL)
#include <Modloader/app/structs/UploadStringCompletedEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadStringCompletedEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
