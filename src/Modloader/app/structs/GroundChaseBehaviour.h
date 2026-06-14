#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundChaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviour_DEFINED)
#include <Modloader/app/structs/GroundChaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_GroundChaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundChaseBehaviour_DEFINED
struct GroundChaseBehaviour__Class;
struct GroundChaseBehaviour {
    struct GroundChaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct GroundChaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_GroundChaseBehaviour_FWDDECL
#include <Modloader/app/structs/GroundChaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_GroundChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundChaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_GroundChaseBehaviour_FWDDECL)
#include <Modloader/app/structs/GroundChaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundChaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
