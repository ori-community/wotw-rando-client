#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_DEFINED)
#define IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_DEFINED
struct IVROverlay_PollNextOverlayEvent;
struct CVROverlay_PollNextOverlayEventPacked;
struct CVROverlay_PollNextOverlayEventUnion {
    struct IVROverlay_PollNextOverlayEvent* pPollNextOverlayEvent;
    struct CVROverlay_PollNextOverlayEventPacked* pPollNextOverlayEventPacked;
};
#endif
#if !defined(IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_FWDDECL)
#define IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_FWDDECL
#include <Modloader/app/structs/CVROverlay_PollNextOverlayEventPacked.h>
#include <Modloader/app/structs/IVROverlay_PollNextOverlayEvent.h>
#endif
#undef IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_INITIALIZING
#if !defined(IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_DEFINED) && !defined(IL2CPP_STRUCT_CVROverlay_PollNextOverlayEventUnion_FWDDECL)
#include <Modloader/app/structs/CVROverlay_PollNextOverlayEventUnion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CVROverlay_PollNextOverlayEventUnion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
