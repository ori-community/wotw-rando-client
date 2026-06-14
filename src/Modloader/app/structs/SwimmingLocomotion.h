#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwimmingLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwimmingLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwimmingLocomotion_DEFINED)
#include <Modloader/app/structs/SwimmingLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_SwimmingLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_SwimmingLocomotion_DEFINED
struct SwimmingLocomotion__Class;
struct SwimmingLocomotion {
    struct SwimmingLocomotion__Class* klass;
    MonitorData* monitor;
    struct SwimmingLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwimmingLocomotion_FWDDECL)
#define IL2CPP_STRUCT_SwimmingLocomotion_FWDDECL
#include <Modloader/app/structs/SwimmingLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_SwimmingLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwimmingLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_SwimmingLocomotion_FWDDECL)
#include <Modloader/app/structs/SwimmingLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwimmingLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
