#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviour_DEFINED)
#include <Modloader/app/structs/ScenesManagerBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ScenesManagerBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerBehaviour_DEFINED
struct ScenesManagerBehaviour__Class;
struct ScenesManagerBehaviour {
    struct ScenesManagerBehaviour__Class* klass;
    MonitorData* monitor;
    struct ScenesManagerBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviour_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerBehaviour_FWDDECL
#include <Modloader/app/structs/ScenesManagerBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerBehaviour_FWDDECL)
#include <Modloader/app/structs/ScenesManagerBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
