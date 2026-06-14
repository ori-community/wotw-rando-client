#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AirChaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AirChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirChaseBehaviour_DEFINED)
#include <Modloader/app/structs/AirChaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_AirChaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AirChaseBehaviour_DEFINED
struct AirChaseBehaviour__Class;
struct AirChaseBehaviour {
    struct AirChaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct AirChaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AirChaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_AirChaseBehaviour_FWDDECL
#include <Modloader/app/structs/AirChaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_AirChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirChaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_AirChaseBehaviour_FWDDECL)
#include <Modloader/app/structs/AirChaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AirChaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
