#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimator_DEFINED)
#include <Modloader/app/structs/TentacleAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleAnimator_DEFINED
struct TentacleAnimator__Class;
struct TentacleAnimator {
    struct TentacleAnimator__Class* klass;
    MonitorData* monitor;
    struct TentacleAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleAnimator_FWDDECL)
#define IL2CPP_STRUCT_TentacleAnimator_FWDDECL
#include <Modloader/app/structs/TentacleAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimator_DEFINED) && !defined(IL2CPP_STRUCT_TentacleAnimator_FWDDECL)
#include <Modloader/app/structs/TentacleAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
