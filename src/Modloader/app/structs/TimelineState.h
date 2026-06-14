#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineState_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineState_DEFINED)
#define IL2CPP_STRUCT_TimelineState_DEFINED
struct TimelineState__Class;
struct TimelineState {
    struct TimelineState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineState_FWDDECL)
#define IL2CPP_STRUCT_TimelineState_FWDDECL
#include <Modloader/app/structs/TimelineState__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineState_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineState_DEFINED) && !defined(IL2CPP_STRUCT_TimelineState_FWDDECL)
#include <Modloader/app/structs/TimelineState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
