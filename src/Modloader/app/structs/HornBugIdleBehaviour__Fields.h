#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_DEFINED
struct ClipAnimation;
struct HornBugIdleBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct ClipAnimation* IdleAnimationRegular;
    struct ClipAnimation* IdleAnimationAggrod;
    int32_t IdleAnimationPriority;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ClipAnimation.h>
#endif
#undef IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugIdleBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugIdleBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugIdleBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
