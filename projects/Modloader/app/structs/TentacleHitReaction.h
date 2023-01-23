#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleHitReaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleHitReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleHitReaction_DEFINED)
#include <Modloader/app/structs/TentacleHitReaction__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleHitReaction__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleHitReaction_DEFINED
struct TentacleHitReaction__Class;
struct TentacleHitReaction {
    struct TentacleHitReaction__Class* klass;
    MonitorData* monitor;
    struct TentacleHitReaction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleHitReaction_FWDDECL)
#define IL2CPP_STRUCT_TentacleHitReaction_FWDDECL
#include <Modloader/app/structs/TentacleHitReaction__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleHitReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleHitReaction_DEFINED) && !defined(IL2CPP_STRUCT_TentacleHitReaction_FWDDECL)
#include <Modloader/app/structs/TentacleHitReaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleHitReaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
