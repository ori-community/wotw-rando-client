#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventSource__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource__Fields_DEFINED)
#include <Modloader/app/structs/EventKeywords__Enum.h>
#include <Modloader/app/structs/EventLevel__Enum.h>
#include <Modloader/app/structs/EventSourceSettings__Enum.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/SessionMask.h>
#if defined(IL2CPP_STRUCT_Guid_DEFINED) && defined(IL2CPP_STRUCT_EventSourceSettings__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventLevel__Enum_DEFINED) && defined(IL2CPP_STRUCT_EventKeywords__Enum_DEFINED) && defined(IL2CPP_STRUCT_SessionMask_DEFINED)
#define IL2CPP_STRUCT_EventSource__Fields_DEFINED
struct Byte__Array;
struct String;
struct EventSource_EventMetadata__Array;
struct EventHandler_1_System_Diagnostics_Tracing_EventCommandEventArgs_;
struct EventDispatcher;
struct EventSource_OverideEventProvider;
struct Exception;
struct EventCommandEventArgs;
struct String__Array;
struct EtwSession__Array;
struct List_1_System_Diagnostics_Tracing_EtwSession_;
struct ActivityTracker;
struct __declspec(align(8)) EventSource__Fields {
    struct Byte__Array* providerMetadata;
    struct String* m_name;
    int32_t m_id;
    struct Guid m_guid;
    struct EventSource_EventMetadata__Array* m_eventData;
    struct Byte__Array* m_rawManifest;
    struct EventHandler_1_System_Diagnostics_Tracing_EventCommandEventArgs_* m_eventCommandExecuted;
    EventSourceSettings__Enum m_config;

    bool m_eventSourceEnabled;
    EventLevel__Enum m_level;

    EventKeywords__Enum m_matchAnyKeyword;

    struct EventDispatcher* m_Dispatchers;
    struct EventSource_OverideEventProvider* m_provider;
    bool m_completelyInited;
    struct Exception* m_constructionException;
    uint8_t m_outOfBandMessageCount;
    struct EventCommandEventArgs* m_deferredCommands;
    struct String__Array* m_traits;
    struct SessionMask m_curLiveSessions;
    struct EtwSession__Array* m_etwSessionIdMap;
    struct List_1_System_Diagnostics_Tracing_EtwSession_* m_legacySessions;
    int64_t m_keywordTriggers;
    struct SessionMask m_activityFilteringForETWEnabled;
    struct ActivityTracker* m_activityTracker;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EventSource__Fields_FWDDECL)
#define IL2CPP_STRUCT_EventSource__Fields_FWDDECL
#include <Modloader/app/structs/ActivityTracker.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/EtwSession__Array.h>
#include <Modloader/app/structs/EventCommandEventArgs.h>
#include <Modloader/app/structs/EventDispatcher.h>
#include <Modloader/app/structs/EventHandler_1_System_Diagnostics_Tracing_EventCommandEventArgs_.h>
#include <Modloader/app/structs/EventSource_EventMetadata__Array.h>
#include <Modloader/app/structs/EventSource_OverideEventProvider.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/List_1_System_Diagnostics_Tracing_EtwSession_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_EventSource__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventSource__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EventSource__Fields_FWDDECL)
#include <Modloader/app/structs/EventSource__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventSource__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
