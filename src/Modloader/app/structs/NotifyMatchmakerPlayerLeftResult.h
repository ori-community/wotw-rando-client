#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_DEFINED)
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftResult__Fields.h>
#if defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult__Fields_DEFINED)
#define IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_DEFINED
struct NotifyMatchmakerPlayerLeftResult__Class;
struct NotifyMatchmakerPlayerLeftResult {
    struct NotifyMatchmakerPlayerLeftResult__Class* klass;
    MonitorData* monitor;
    struct NotifyMatchmakerPlayerLeftResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_FWDDECL)
#define IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_FWDDECL
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftResult__Class.h>
#endif
#undef IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_DEFINED) && !defined(IL2CPP_STRUCT_NotifyMatchmakerPlayerLeftResult_FWDDECL)
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotifyMatchmakerPlayerLeftResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
