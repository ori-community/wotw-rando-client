#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveContactEmailRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveContactEmailRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveContactEmailRequest_DEFINED)
#include <Modloader/app/structs/RemoveContactEmailRequest__Fields.h>
#if defined(IL2CPP_STRUCT_RemoveContactEmailRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveContactEmailRequest_DEFINED
struct RemoveContactEmailRequest__Class;
struct RemoveContactEmailRequest {
    struct RemoveContactEmailRequest__Class* klass;
    MonitorData* monitor;
    struct RemoveContactEmailRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveContactEmailRequest_FWDDECL)
#define IL2CPP_STRUCT_RemoveContactEmailRequest_FWDDECL
#include <Modloader/app/structs/RemoveContactEmailRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoveContactEmailRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveContactEmailRequest_DEFINED) && !defined(IL2CPP_STRUCT_RemoveContactEmailRequest_FWDDECL)
#include <Modloader/app/structs/RemoveContactEmailRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveContactEmailRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
