#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScalableAnimationPlayer_Event_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScalableAnimationPlayer_Event_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer_Event_DEFINED)
#include <Modloader/app/structs/ScalableAnimationPlayer_Event__Fields.h>
#if defined(IL2CPP_STRUCT_ScalableAnimationPlayer_Event__Fields_DEFINED)
#define IL2CPP_STRUCT_ScalableAnimationPlayer_Event_DEFINED
struct ScalableAnimationPlayer_Event__Class;
struct ScalableAnimationPlayer_Event {
    struct ScalableAnimationPlayer_Event__Class* klass;
    MonitorData* monitor;
    struct ScalableAnimationPlayer_Event__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer_Event_FWDDECL)
#define IL2CPP_STRUCT_ScalableAnimationPlayer_Event_FWDDECL
#include <Modloader/app/structs/ScalableAnimationPlayer_Event__Class.h>
#endif
#undef IL2CPP_STRUCT_ScalableAnimationPlayer_Event_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalableAnimationPlayer_Event_DEFINED) && !defined(IL2CPP_STRUCT_ScalableAnimationPlayer_Event_FWDDECL)
#include <Modloader/app/structs/ScalableAnimationPlayer_Event.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScalableAnimationPlayer_Event.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
