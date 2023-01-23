#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetry__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetry__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry__StaticFields_DEFINED)
#include <Modloader/app/structs/MoonTelemetry_State__Enum.h>
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_MoonTelemetry_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetry__StaticFields_DEFINED
struct Queue_1_System_Object_;
struct Dictionary_2_System_Type_System_Int32_;
struct MoonTelemetry_EndPointSettings;
struct Queue_1_MoonTelemetry_MaelstromEvent_;
struct List_1_MoonTelemetry_SendRequestData_;
struct StringBuilder;
struct Thread;
struct Stopwatch;
struct Action;
struct List_1_System_String_;
struct Dictionary_2_System_Int32_System_Int32_;
struct MoonTelemetry__StaticFields {
    int32_t DEBUG_RESPONSE_CODE;
    bool DEBUG;
    int32_t SLEEP_INTERVAL_SECONDS;
    struct Queue_1_System_Object_* postDataQueue;
    struct Dictionary_2_System_Type_System_Int32_* typeIDTable;
    int32_t sequenceID;
    struct MoonTelemetry_EndPointSettings* maelstromSettings;
    struct Queue_1_MoonTelemetry_MaelstromEvent_* pendingEvents;
    struct Queue_1_System_Object_* bufferDataQueue;
    struct List_1_MoonTelemetry_SendRequestData_* requests;
    struct StringBuilder* eventBatchBuilder;
    struct StringBuilder* errorMessageBuilder;
    bool useAuth;
    MoonTelemetry_State__Enum s_currentState;

    bool s_isInited;
    struct Thread* m_moonTelemetryMainThread;
    bool s_isThreadStarted;
    bool s_doThread;
    bool m_allowTelemetry;
    struct TimeSpan m_standard_delay;
    struct TimeSpan m_fail_delay;
    struct TimeSpan m_delay;
    struct Stopwatch* m_stopWatch;
    int32_t s_eventsInBatch;
    int32_t s_successfulRequests;
    int32_t s_failedRequests;
    struct Action* OnStartThread;
    struct Action* OnStopThread;
    int32_t m_totalSends;
    int32_t m_pendingEventsMaxCount;
    int32_t m_postDataQueueMaxCount;
    struct List_1_System_String_* m_exceptions;
    struct Dictionary_2_System_Int32_System_Int32_* m_responseCodesCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetry__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetry__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Int32_.h>
#include <Modloader/app/structs/List_1_MoonTelemetry_SendRequestData_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings.h>
#include <Modloader/app/structs/Queue_1_MoonTelemetry_MaelstromEvent_.h>
#include <Modloader/app/structs/Queue_1_System_Object_.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetry__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetry__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetry__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetry__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetry__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
