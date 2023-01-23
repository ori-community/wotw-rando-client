#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UploadHandlerRaw_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UploadHandlerRaw_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadHandlerRaw_DEFINED)
#include <Modloader/app/structs/UploadHandlerRaw__Fields.h>
#if defined(IL2CPP_STRUCT_UploadHandlerRaw__Fields_DEFINED)
#define IL2CPP_STRUCT_UploadHandlerRaw_DEFINED
struct UploadHandlerRaw__Class;
struct UploadHandlerRaw {
    struct UploadHandlerRaw__Class* klass;
    MonitorData* monitor;
    struct UploadHandlerRaw__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UploadHandlerRaw_FWDDECL)
#define IL2CPP_STRUCT_UploadHandlerRaw_FWDDECL
#include <Modloader/app/structs/UploadHandlerRaw__Class.h>
#endif
#undef IL2CPP_STRUCT_UploadHandlerRaw_INITIALIZING
#if !defined(IL2CPP_STRUCT_UploadHandlerRaw_DEFINED) && !defined(IL2CPP_STRUCT_UploadHandlerRaw_FWDDECL)
#include <Modloader/app/structs/UploadHandlerRaw.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UploadHandlerRaw.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
