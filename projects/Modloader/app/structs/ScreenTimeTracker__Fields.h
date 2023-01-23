#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenTimeTracker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenTimeTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenTimeTracker__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Guid.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_ScreenTimeTracker__Fields_DEFINED
struct Queue_1_PlayFab_EventsModels_EventContents_;
struct EntityKey_4;
struct __declspec(align(8)) ScreenTimeTracker__Fields {
    struct Guid focusId;
    struct Guid gameSessionID;
    bool initialFocus;
    bool isSending;
    struct DateTime focusOffDateTime;
    struct DateTime focusOnDateTime;
    struct Queue_1_PlayFab_EventsModels_EventContents_* eventsRequests;
    struct EntityKey_4* entityKey;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenTimeTracker__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenTimeTracker__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_4.h>
#include <Modloader/app/structs/Queue_1_PlayFab_EventsModels_EventContents_.h>
#endif
#undef IL2CPP_STRUCT_ScreenTimeTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenTimeTracker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenTimeTracker__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenTimeTracker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenTimeTracker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
