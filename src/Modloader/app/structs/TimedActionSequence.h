#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimedActionSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimedActionSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedActionSequence_DEFINED)
#include <Modloader/app/structs/TimedActionSequence__Fields.h>
#if defined(IL2CPP_STRUCT_TimedActionSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_TimedActionSequence_DEFINED
struct TimedActionSequence__Class;
struct TimedActionSequence {
    struct TimedActionSequence__Class* klass;
    MonitorData* monitor;
    struct TimedActionSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimedActionSequence_FWDDECL)
#define IL2CPP_STRUCT_TimedActionSequence_FWDDECL
#include <Modloader/app/structs/TimedActionSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_TimedActionSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimedActionSequence_DEFINED) && !defined(IL2CPP_STRUCT_TimedActionSequence_FWDDECL)
#include <Modloader/app/structs/TimedActionSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimedActionSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
