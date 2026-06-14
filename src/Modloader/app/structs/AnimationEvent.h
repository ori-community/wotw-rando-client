#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEvent_DEFINED)
#include <Modloader/app/structs/AnimationEvent__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationEvent_DEFINED
struct AnimationEvent__Class;
struct AnimationEvent {
    struct AnimationEvent__Class* klass;
    MonitorData* monitor;
    struct AnimationEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationEvent_FWDDECL)
#define IL2CPP_STRUCT_AnimationEvent_FWDDECL
#include <Modloader/app/structs/AnimationEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEvent_DEFINED) && !defined(IL2CPP_STRUCT_AnimationEvent_FWDDECL)
#include <Modloader/app/structs/AnimationEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
