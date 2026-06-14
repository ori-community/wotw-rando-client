#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AirEntityLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AirEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirEntityLocomotion_DEFINED)
#include <Modloader/app/structs/AirEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_AirEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_AirEntityLocomotion_DEFINED
struct AirEntityLocomotion__Class;
struct AirEntityLocomotion {
    struct AirEntityLocomotion__Class* klass;
    MonitorData* monitor;
    struct AirEntityLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AirEntityLocomotion_FWDDECL)
#define IL2CPP_STRUCT_AirEntityLocomotion_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_AirEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirEntityLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_AirEntityLocomotion_FWDDECL)
#include <Modloader/app/structs/AirEntityLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AirEntityLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
