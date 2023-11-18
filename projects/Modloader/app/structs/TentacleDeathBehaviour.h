#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleDeathBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleDeathBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleDeathBehaviour_DEFINED)
#include <Modloader/app/structs/TentacleDeathBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleDeathBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleDeathBehaviour_DEFINED
struct TentacleDeathBehaviour__Class;
struct TentacleDeathBehaviour {
    struct TentacleDeathBehaviour__Class* klass;
    MonitorData* monitor;
    struct TentacleDeathBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleDeathBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TentacleDeathBehaviour_FWDDECL
#include <Modloader/app/structs/TentacleDeathBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleDeathBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleDeathBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TentacleDeathBehaviour_FWDDECL)
#include <Modloader/app/structs/TentacleDeathBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleDeathBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
