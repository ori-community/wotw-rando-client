#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurningBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurningBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurningBehaviour_DEFINED)
#include <Modloader/app/structs/TurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TurningBehaviour_DEFINED
struct TurningBehaviour__Class;
struct TurningBehaviour {
    struct TurningBehaviour__Class* klass;
    MonitorData* monitor;
    struct TurningBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurningBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TurningBehaviour_FWDDECL
#include <Modloader/app/structs/TurningBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TurningBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurningBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TurningBehaviour_FWDDECL)
#include <Modloader/app/structs/TurningBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurningBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
