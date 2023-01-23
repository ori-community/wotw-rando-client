#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeDistanceGate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeDistanceGate_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeDistanceGate_DEFINED)
#include <Modloader/app/structs/TimeDistanceGate__Fields.h>
#if defined(IL2CPP_STRUCT_TimeDistanceGate__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeDistanceGate_DEFINED
struct TimeDistanceGate__Class;
struct TimeDistanceGate {
    struct TimeDistanceGate__Class* klass;
    MonitorData* monitor;
    struct TimeDistanceGate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeDistanceGate_FWDDECL)
#define IL2CPP_STRUCT_TimeDistanceGate_FWDDECL
#include <Modloader/app/structs/TimeDistanceGate__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeDistanceGate_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeDistanceGate_DEFINED) && !defined(IL2CPP_STRUCT_TimeDistanceGate_FWDDECL)
#include <Modloader/app/structs/TimeDistanceGate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeDistanceGate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
