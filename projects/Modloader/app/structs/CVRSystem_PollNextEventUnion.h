#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_DEFINED)
#define IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_DEFINED
struct IVRSystem_PollNextEvent;
struct CVRSystem_PollNextEventPacked;
struct CVRSystem_PollNextEventUnion {
    struct IVRSystem_PollNextEvent* pPollNextEvent;
    struct CVRSystem_PollNextEventPacked* pPollNextEventPacked;
};
#endif
#if !defined(IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_FWDDECL)
#define IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_FWDDECL
#include <Modloader/app/structs/CVRSystem_PollNextEventPacked.h>
#include <Modloader/app/structs/IVRSystem_PollNextEvent.h>
#endif
#undef IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_DEFINED) && !defined(IL2CPP_STRUCT_CVRSystem_PollNextEventUnion_FWDDECL)
#include <Modloader/app/structs/CVRSystem_PollNextEventUnion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVRSystem_PollNextEventUnion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
