#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_DEFINED
struct String;
struct Timer_1;
struct Thread;
struct MoonTelemetryLogger__StaticFields {
    struct String* s_message;
    struct Timer_1* s_threadStatusTimer;
    struct Thread* s_currentThread;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Thread.h>
#include <Modloader/app/structs/Timer_1.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryLogger__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryLogger__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryLogger__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
