#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerFallReactionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerFallReactionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerFallReactionBehaviour_DEFINED)
#include <Modloader/app/structs/MinerFallReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerFallReactionBehaviour_DEFINED
struct MinerFallReactionBehaviour__Class;
struct MinerFallReactionBehaviour {
    struct MinerFallReactionBehaviour__Class* klass;
    MonitorData* monitor;
    struct MinerFallReactionBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerFallReactionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MinerFallReactionBehaviour_FWDDECL
#include <Modloader/app/structs/MinerFallReactionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerFallReactionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerFallReactionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MinerFallReactionBehaviour_FWDDECL)
#include <Modloader/app/structs/MinerFallReactionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerFallReactionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
