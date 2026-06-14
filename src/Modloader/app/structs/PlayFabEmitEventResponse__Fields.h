#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_DEFINED)
#include <Modloader/app/structs/EmitEventResult__Enum.h>
#if defined(IL2CPP_STRUCT_EmitEventResult__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_DEFINED
struct PlayFabEvent;
struct PlayFabError;
struct WriteEventsResponse;
struct IList_1_PlayFab_IPlayFabEmitEventRequest_;
struct __declspec(align(8)) PlayFabEmitEventResponse__Fields {
    struct PlayFabEvent* _Event_k__BackingField;
    EmitEventResult__Enum _EmitEventResult_k__BackingField;

    struct PlayFabError* _PlayFabError_k__BackingField;
    struct WriteEventsResponse* _WriteEventsResponse_k__BackingField;
    struct IList_1_PlayFab_IPlayFabEmitEventRequest_* _Batch_k__BackingField;
    uint64_t _BatchNumber_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_FWDDECL
#include <Modloader/app/structs/IList_1_PlayFab_IPlayFabEmitEventRequest_.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/PlayFabEvent.h>
#include <Modloader/app/structs/WriteEventsResponse.h>
#endif
#undef IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabEmitEventResponse__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabEmitEventResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabEmitEventResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
