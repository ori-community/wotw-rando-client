#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteeringForces_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteeringForces_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForces_DEFINED)
#include <Modloader/app/structs/SteeringForces__Fields.h>
#if defined(IL2CPP_STRUCT_SteeringForces__Fields_DEFINED)
#define IL2CPP_STRUCT_SteeringForces_DEFINED
struct SteeringForces__Class;
struct SteeringForces {
    struct SteeringForces__Class* klass;
    MonitorData* monitor;
    struct SteeringForces__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteeringForces_FWDDECL)
#define IL2CPP_STRUCT_SteeringForces_FWDDECL
#include <Modloader/app/structs/SteeringForces__Class.h>
#endif
#undef IL2CPP_STRUCT_SteeringForces_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteeringForces_DEFINED) && !defined(IL2CPP_STRUCT_SteeringForces_FWDDECL)
#include <Modloader/app/structs/SteeringForces.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteeringForces.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
