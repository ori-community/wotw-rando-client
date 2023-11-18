#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererTurningBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererTurningBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererTurningBehaviour_DEFINED)
#include <Modloader/app/structs/WandererTurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_WandererTurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererTurningBehaviour_DEFINED
struct WandererTurningBehaviour__Class;
struct WandererTurningBehaviour {
    struct WandererTurningBehaviour__Class* klass;
    MonitorData* monitor;
    struct WandererTurningBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererTurningBehaviour_FWDDECL)
#define IL2CPP_STRUCT_WandererTurningBehaviour_FWDDECL
#include <Modloader/app/structs/WandererTurningBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererTurningBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererTurningBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_WandererTurningBehaviour_FWDDECL)
#include <Modloader/app/structs/WandererTurningBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererTurningBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
