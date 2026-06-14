#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleJoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleJoint_DEFINED)
#include <Modloader/app/structs/TentacleJoint__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleJoint__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleJoint_DEFINED
struct TentacleJoint__Class;
struct TentacleJoint {
    struct TentacleJoint__Class* klass;
    MonitorData* monitor;
    struct TentacleJoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleJoint_FWDDECL)
#define IL2CPP_STRUCT_TentacleJoint_FWDDECL
#include <Modloader/app/structs/TentacleJoint__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleJoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleJoint_DEFINED) && !defined(IL2CPP_STRUCT_TentacleJoint_FWDDECL)
#include <Modloader/app/structs/TentacleJoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleJoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
