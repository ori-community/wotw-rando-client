#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabHttp__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabHttp__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabHttp__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PlayFabHttp__StaticFields_DEFINED
struct List_1_PlayFab_Internal_CallRequestContainer_;
struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_;
struct PlayFabHttp_ApiProcessErrorEvent;
struct Dictionary_2_System_String_System_String_;
struct IPlayFabLogger;
struct IScreenTimeTracker;
struct PlayFabHttp__StaticFields {
    struct List_1_PlayFab_Internal_CallRequestContainer_* _apiCallQueue;
    struct PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_* ApiProcessingEventHandler;
    struct PlayFabHttp_ApiProcessErrorEvent* ApiProcessingErrorEventHandler;
    struct Dictionary_2_System_String_System_String_* GlobalHeaderInjection;
    struct IPlayFabLogger* _logger;
    struct IScreenTimeTracker* screenTimeTracker;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabHttp__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabHttp__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/IPlayFabLogger.h>
#include <Modloader/app/structs/IScreenTimeTracker.h>
#include <Modloader/app/structs/List_1_PlayFab_Internal_CallRequestContainer_.h>
#include <Modloader/app/structs/PlayFabHttp_ApiProcessErrorEvent.h>
#include <Modloader/app/structs/PlayFabHttp_ApiProcessingEvent_1_ApiProcessingEventArgs_.h>
#endif
#undef IL2CPP_STRUCT_PlayFabHttp__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabHttp__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabHttp__StaticFields_FWDDECL)
#include <Modloader/app/structs/PlayFabHttp__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabHttp__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
