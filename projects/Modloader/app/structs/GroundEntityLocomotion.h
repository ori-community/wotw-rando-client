#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundEntityLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEntityLocomotion_DEFINED)
#include <Modloader/app/structs/GroundEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundEntityLocomotion_DEFINED
struct GroundEntityLocomotion__Class;
struct GroundEntityLocomotion {
    struct GroundEntityLocomotion__Class* klass;
    MonitorData* monitor;
    struct GroundEntityLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundEntityLocomotion_FWDDECL)
#define IL2CPP_STRUCT_GroundEntityLocomotion_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_GroundEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEntityLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_GroundEntityLocomotion_FWDDECL)
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
