#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationEndedCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationEndedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEndedCondition_DEFINED)
#include <Modloader/app/structs/AnimationEndedCondition__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationEndedCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationEndedCondition_DEFINED
struct AnimationEndedCondition__Class;
struct AnimationEndedCondition {
    struct AnimationEndedCondition__Class* klass;
    MonitorData* monitor;
    struct AnimationEndedCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationEndedCondition_FWDDECL)
#define IL2CPP_STRUCT_AnimationEndedCondition_FWDDECL
#include <Modloader/app/structs/AnimationEndedCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationEndedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationEndedCondition_DEFINED) && !defined(IL2CPP_STRUCT_AnimationEndedCondition_FWDDECL)
#include <Modloader/app/structs/AnimationEndedCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationEndedCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
