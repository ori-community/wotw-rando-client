#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundLocomotion_DEFINED)
#include <Modloader/app/structs/GroundLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_GroundLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundLocomotion_DEFINED
struct GroundLocomotion__Class;
struct GroundLocomotion {
    struct GroundLocomotion__Class* klass;
    MonitorData* monitor;
    struct GroundLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundLocomotion_FWDDECL)
#define IL2CPP_STRUCT_GroundLocomotion_FWDDECL
#include <Modloader/app/structs/GroundLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_GroundLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_GroundLocomotion_FWDDECL)
#include <Modloader/app/structs/GroundLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
