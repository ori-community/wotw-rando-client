#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SessionEndedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SessionEndedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionEndedEventData__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Double__DEFINED)
#define IL2CPP_STRUCT_SessionEndedEventData__Fields_DEFINED
struct String;
struct SessionEndedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    bool Crashed;
    struct DateTime EndTime;
    struct Nullable_1_Double_ KilobytesWritten;
    double SessionLengthMs;
    struct String* TitleId;
    struct String* UserId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SessionEndedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_SessionEndedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SessionEndedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SessionEndedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SessionEndedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/SessionEndedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SessionEndedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
