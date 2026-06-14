#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_DEFINED)
#include <Modloader/app/structs/CVRSystem_PollNextEventPacked__Fields.h>
#if defined(IL2CPP_STRUCT_CVRSystem_PollNextEventPacked__Fields_DEFINED)
#define IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_DEFINED
struct CVRSystem_PollNextEventPacked__Class;
struct CVRSystem_PollNextEventPacked {
    struct CVRSystem_PollNextEventPacked__Class* klass;
    MonitorData* monitor;
    struct CVRSystem_PollNextEventPacked__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_FWDDECL)
#define IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_FWDDECL
#include <Modloader/app/structs/CVRSystem_PollNextEventPacked__Class.h>
#endif
#undef IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_DEFINED) && !defined(IL2CPP_STRUCT_CVRSystem_PollNextEventPacked_FWDDECL)
#include <Modloader/app/structs/CVRSystem_PollNextEventPacked.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRSystem_PollNextEventPacked.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
