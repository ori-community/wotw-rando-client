#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabLoggerBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabLoggerBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLoggerBase__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_PlayFabLoggerBase__Fields_DEFINED
struct Queue_1_System_String_;
struct Thread;
struct Object;
struct IPAddress;
struct String;
struct __declspec(align(8)) PlayFabLoggerBase__Fields {
    struct Queue_1_System_String_* LogMessageQueue;
    struct Thread* _writeLogThread;
    struct Object* _threadLock;
    struct DateTime _threadKillTime;
    bool _isApplicationPlaying;
    int32_t _pendingLogsCount;
    struct IPAddress* _ip_k__BackingField;
    int32_t _port_k__BackingField;
    struct String* _url_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabLoggerBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabLoggerBase__Fields_FWDDECL
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Queue_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_PlayFabLoggerBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabLoggerBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabLoggerBase__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabLoggerBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabLoggerBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
