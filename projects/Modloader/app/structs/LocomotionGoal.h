#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionGoal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionGoal_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionGoal_DEFINED)
#include <Modloader/app/structs/LocomotionGoal__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionGoal__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionGoal_DEFINED
struct LocomotionGoal__Class;
struct LocomotionGoal {
    struct LocomotionGoal__Class* klass;
    MonitorData* monitor;
    struct LocomotionGoal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionGoal_FWDDECL)
#define IL2CPP_STRUCT_LocomotionGoal_FWDDECL
#include <Modloader/app/structs/LocomotionGoal__Class.h>
#endif
#undef IL2CPP_STRUCT_LocomotionGoal_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionGoal_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionGoal_FWDDECL)
#include <Modloader/app/structs/LocomotionGoal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionGoal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
