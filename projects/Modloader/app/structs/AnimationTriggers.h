#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTriggers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTriggers_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTriggers_DEFINED)
#include <Modloader/app/structs/AnimationTriggers__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationTriggers__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationTriggers_DEFINED
struct AnimationTriggers__Class;
struct AnimationTriggers {
    struct AnimationTriggers__Class* klass;
    MonitorData* monitor;
    struct AnimationTriggers__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationTriggers_FWDDECL)
#define IL2CPP_STRUCT_AnimationTriggers_FWDDECL
#include <Modloader/app/structs/AnimationTriggers__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationTriggers_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTriggers_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTriggers_FWDDECL)
#include <Modloader/app/structs/AnimationTriggers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTriggers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
