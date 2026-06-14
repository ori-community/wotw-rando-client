#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimedTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimedTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedTrigger_DEFINED)
#include <Modloader/app/structs/TimedTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_TimedTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_TimedTrigger_DEFINED
struct TimedTrigger__Class;
struct TimedTrigger {
    struct TimedTrigger__Class* klass;
    MonitorData* monitor;
    struct TimedTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimedTrigger_FWDDECL)
#define IL2CPP_STRUCT_TimedTrigger_FWDDECL
#include <Modloader/app/structs/TimedTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_TimedTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedTrigger_DEFINED) && !defined(IL2CPP_STRUCT_TimedTrigger_FWDDECL)
#include <Modloader/app/structs/TimedTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimedTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
