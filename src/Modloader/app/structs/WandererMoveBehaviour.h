#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererMoveBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererMoveBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererMoveBehaviour_DEFINED)
#include <Modloader/app/structs/WandererMoveBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_WandererMoveBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererMoveBehaviour_DEFINED
struct WandererMoveBehaviour__Class;
struct WandererMoveBehaviour {
    struct WandererMoveBehaviour__Class* klass;
    MonitorData* monitor;
    struct WandererMoveBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererMoveBehaviour_FWDDECL)
#define IL2CPP_STRUCT_WandererMoveBehaviour_FWDDECL
#include <Modloader/app/structs/WandererMoveBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererMoveBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererMoveBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_WandererMoveBehaviour_FWDDECL)
#include <Modloader/app/structs/WandererMoveBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererMoveBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
