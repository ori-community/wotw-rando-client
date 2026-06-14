#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleAggroBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleAggroBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAggroBehaviour_DEFINED)
#include <Modloader/app/structs/TentacleAggroBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleAggroBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleAggroBehaviour_DEFINED
struct TentacleAggroBehaviour__Class;
struct TentacleAggroBehaviour {
    struct TentacleAggroBehaviour__Class* klass;
    MonitorData* monitor;
    struct TentacleAggroBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleAggroBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TentacleAggroBehaviour_FWDDECL
#include <Modloader/app/structs/TentacleAggroBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleAggroBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAggroBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TentacleAggroBehaviour_FWDDECL)
#include <Modloader/app/structs/TentacleAggroBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleAggroBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
