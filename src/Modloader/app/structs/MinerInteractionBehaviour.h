#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerInteractionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerInteractionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerInteractionBehaviour_DEFINED)
#include <Modloader/app/structs/MinerInteractionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MinerInteractionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerInteractionBehaviour_DEFINED
struct MinerInteractionBehaviour__Class;
struct MinerInteractionBehaviour {
    struct MinerInteractionBehaviour__Class* klass;
    MonitorData* monitor;
    struct MinerInteractionBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerInteractionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MinerInteractionBehaviour_FWDDECL
#include <Modloader/app/structs/MinerInteractionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerInteractionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerInteractionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MinerInteractionBehaviour_FWDDECL)
#include <Modloader/app/structs/MinerInteractionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerInteractionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
