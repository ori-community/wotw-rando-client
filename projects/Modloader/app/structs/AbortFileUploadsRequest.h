#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbortFileUploadsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbortFileUploadsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbortFileUploadsRequest_DEFINED)
#include <Modloader/app/structs/AbortFileUploadsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AbortFileUploadsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AbortFileUploadsRequest_DEFINED
struct AbortFileUploadsRequest__Class;
struct AbortFileUploadsRequest {
    struct AbortFileUploadsRequest__Class* klass;
    MonitorData* monitor;
    struct AbortFileUploadsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbortFileUploadsRequest_FWDDECL)
#define IL2CPP_STRUCT_AbortFileUploadsRequest_FWDDECL
#include <Modloader/app/structs/AbortFileUploadsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AbortFileUploadsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbortFileUploadsRequest_DEFINED) && !defined(IL2CPP_STRUCT_AbortFileUploadsRequest_FWDDECL)
#include <Modloader/app/structs/AbortFileUploadsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbortFileUploadsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
