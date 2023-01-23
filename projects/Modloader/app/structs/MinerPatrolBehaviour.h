#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerPatrolBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerPatrolBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerPatrolBehaviour_DEFINED)
#include <Modloader/app/structs/MinerPatrolBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MinerPatrolBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerPatrolBehaviour_DEFINED
struct MinerPatrolBehaviour__Class;
struct MinerPatrolBehaviour {
    struct MinerPatrolBehaviour__Class* klass;
    MonitorData* monitor;
    struct MinerPatrolBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerPatrolBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MinerPatrolBehaviour_FWDDECL
#include <Modloader/app/structs/MinerPatrolBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerPatrolBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerPatrolBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MinerPatrolBehaviour_FWDDECL)
#include <Modloader/app/structs/MinerPatrolBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerPatrolBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
