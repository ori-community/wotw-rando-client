#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererIdleBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererIdleBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererIdleBehaviour_DEFINED)
#include <Modloader/app/structs/WandererIdleBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_WandererIdleBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererIdleBehaviour_DEFINED
struct WandererIdleBehaviour__Class;
struct WandererIdleBehaviour {
    struct WandererIdleBehaviour__Class* klass;
    MonitorData* monitor;
    struct WandererIdleBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererIdleBehaviour_FWDDECL)
#define IL2CPP_STRUCT_WandererIdleBehaviour_FWDDECL
#include <Modloader/app/structs/WandererIdleBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererIdleBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererIdleBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_WandererIdleBehaviour_FWDDECL)
#include <Modloader/app/structs/WandererIdleBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererIdleBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
