#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_DEFINED)
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftRequest__Fields.h>
#if defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_DEFINED
struct NotifyMatchmakerPlayerLeftRequest__Class;
struct NotifyMatchmakerPlayerLeftRequest {
    struct NotifyMatchmakerPlayerLeftRequest__Class* klass;
    MonitorData* monitor;
    struct NotifyMatchmakerPlayerLeftRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_FWDDECL)
#define IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_FWDDECL
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_DEFINED) && !defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftRequest_FWDDECL)
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
