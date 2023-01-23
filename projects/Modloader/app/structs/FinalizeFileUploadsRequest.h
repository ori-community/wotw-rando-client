#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FinalizeFileUploadsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FinalizeFileUploadsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_FinalizeFileUploadsRequest_DEFINED)
#include <Modloader/app/structs/FinalizeFileUploadsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_FinalizeFileUploadsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_FinalizeFileUploadsRequest_DEFINED
struct FinalizeFileUploadsRequest__Class;
struct FinalizeFileUploadsRequest {
    struct FinalizeFileUploadsRequest__Class* klass;
    MonitorData* monitor;
    struct FinalizeFileUploadsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FinalizeFileUploadsRequest_FWDDECL)
#define IL2CPP_STRUCT_FinalizeFileUploadsRequest_FWDDECL
#include <Modloader/app/structs/FinalizeFileUploadsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_FinalizeFileUploadsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_FinalizeFileUploadsRequest_DEFINED) && !defined(IL2CPP_STRUCT_FinalizeFileUploadsRequest_FWDDECL)
#include <Modloader/app/structs/FinalizeFileUploadsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FinalizeFileUploadsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
