#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionAnimation_DEFINED)
#include <Modloader/app/structs/LocomotionAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionAnimation_DEFINED
struct LocomotionAnimation__Class;
struct LocomotionAnimation {
    struct LocomotionAnimation__Class* klass;
    MonitorData* monitor;
    struct LocomotionAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionAnimation_FWDDECL)
#define IL2CPP_STRUCT_LocomotionAnimation_FWDDECL
#include <Modloader/app/structs/LocomotionAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_LocomotionAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionAnimation_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionAnimation_FWDDECL)
#include <Modloader/app/structs/LocomotionAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
