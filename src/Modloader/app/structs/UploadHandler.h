#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadHandler_DEFINED)
#include <Modloader/app/structs/UploadHandler__Fields.h>
#if defined(IL2CPP_STRUCT_UploadHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadHandler_DEFINED
struct UploadHandler__Class;
struct UploadHandler {
    struct UploadHandler__Class* klass;
    MonitorData* monitor;
    struct UploadHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadHandler_FWDDECL)
#define IL2CPP_STRUCT_UploadHandler_FWDDECL
#include <Modloader/app/structs/UploadHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadHandler_DEFINED) && !defined(IL2CPP_STRUCT_UploadHandler_FWDDECL)
#include <Modloader/app/structs/UploadHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
