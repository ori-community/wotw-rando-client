#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_DEFINED
struct Queue_1_System_Action_;
struct List_1_PlayFab_Internal_CallRequestContainer_;
struct Thread;
struct Object;
struct String;
struct PlayFabWebRequest__StaticFields {
    struct Queue_1_System_Action_* ResultQueueTransferThread;
    struct Queue_1_System_Action_* ResultQueueMainThread;
    struct List_1_PlayFab_Internal_CallRequestContainer_* ActiveRequests;
    bool certValidationSet;
    struct Thread* _requestQueueThread;
    struct Object* _ThreadLock;
    struct TimeSpan ThreadKillTimeout;
    struct DateTime _threadKillTime;
    bool _isApplicationPlaying;
    int32_t _activeCallCount;
    struct String* _unityVersion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_PlayFab_Internal_CallRequestContainer_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_System_Action_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabWebRequest__StaticFields_FWDDECL)
#include <Modloader/app/structs/PlayFabWebRequest__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabWebRequest__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
