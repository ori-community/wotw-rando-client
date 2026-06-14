#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IScenesManagerBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IScenesManagerBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScenesManagerBehaviour_DEFINED)
#define IL2CPP_STRUCT_IScenesManagerBehaviour_DEFINED
struct IScenesManagerBehaviour__Class;
struct IScenesManagerBehaviour {
    struct IScenesManagerBehaviour__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IScenesManagerBehaviour_FWDDECL)
#define IL2CPP_STRUCT_IScenesManagerBehaviour_FWDDECL
#include <Modloader/app/structs/IScenesManagerBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_IScenesManagerBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScenesManagerBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_IScenesManagerBehaviour_FWDDECL)
#include <Modloader/app/structs/IScenesManagerBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IScenesManagerBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
