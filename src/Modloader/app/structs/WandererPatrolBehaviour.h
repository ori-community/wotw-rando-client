#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererPatrolBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererPatrolBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererPatrolBehaviour_DEFINED)
#include <Modloader/app/structs/WandererPatrolBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_WandererPatrolBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererPatrolBehaviour_DEFINED
struct WandererPatrolBehaviour__Class;
struct WandererPatrolBehaviour {
    struct WandererPatrolBehaviour__Class* klass;
    MonitorData* monitor;
    struct WandererPatrolBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererPatrolBehaviour_FWDDECL)
#define IL2CPP_STRUCT_WandererPatrolBehaviour_FWDDECL
#include <Modloader/app/structs/WandererPatrolBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererPatrolBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererPatrolBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_WandererPatrolBehaviour_FWDDECL)
#include <Modloader/app/structs/WandererPatrolBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererPatrolBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
