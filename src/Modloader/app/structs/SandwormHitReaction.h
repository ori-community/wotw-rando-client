#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandwormHitReaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandwormHitReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandwormHitReaction_DEFINED)
#include <Modloader/app/structs/SandwormHitReaction__Fields.h>
#if defined(IL2CPP_STRUCT_SandwormHitReaction__Fields_DEFINED)
#define IL2CPP_STRUCT_SandwormHitReaction_DEFINED
struct SandwormHitReaction__Class;
struct SandwormHitReaction {
    struct SandwormHitReaction__Class* klass;
    MonitorData* monitor;
    struct SandwormHitReaction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandwormHitReaction_FWDDECL)
#define IL2CPP_STRUCT_SandwormHitReaction_FWDDECL
#include <Modloader/app/structs/SandwormHitReaction__Class.h>
#endif
#undef IL2CPP_STRUCT_SandwormHitReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandwormHitReaction_DEFINED) && !defined(IL2CPP_STRUCT_SandwormHitReaction_FWDDECL)
#include <Modloader/app/structs/SandwormHitReaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandwormHitReaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
