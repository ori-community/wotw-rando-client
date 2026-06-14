#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Timer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Timer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer__Fields_DEFINED)
#include <Modloader/app/structs/MarshalByRefObject__Fields.h>
#if defined(IL2CPP_STRUCT_MarshalByRefObject__Fields_DEFINED)
#define IL2CPP_STRUCT_Timer__Fields_DEFINED
struct TimerCallback;
struct Object;
struct Timer__Fields {
    struct MarshalByRefObject__Fields _;
    struct TimerCallback* callback;
    struct Object* state;
    int64_t due_time_ms;
    int64_t period_ms;
    int64_t next_run;
    bool disposed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Timer__Fields_FWDDECL)
#define IL2CPP_STRUCT_Timer__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TimerCallback.h>
#endif
#undef IL2CPP_STRUCT_Timer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Timer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Timer__Fields_FWDDECL)
#include <Modloader/app/structs/Timer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Timer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
