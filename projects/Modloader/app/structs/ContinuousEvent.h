#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContinuousEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContinuousEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinuousEvent_DEFINED)
#define IL2CPP_STRUCT_ContinuousEvent_DEFINED
struct ContinuousEvent__Class;
struct ContinuousEvent {
    struct ContinuousEvent__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ContinuousEvent_FWDDECL)
#define IL2CPP_STRUCT_ContinuousEvent_FWDDECL
#include <Modloader/app/structs/ContinuousEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_ContinuousEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinuousEvent_DEFINED) && !defined(IL2CPP_STRUCT_ContinuousEvent_FWDDECL)
#include <Modloader/app/structs/ContinuousEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContinuousEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
