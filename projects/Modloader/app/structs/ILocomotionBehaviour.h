#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILocomotionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILocomotionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILocomotionBehaviour_DEFINED)
#define IL2CPP_STRUCT_ILocomotionBehaviour_DEFINED
struct ILocomotionBehaviour__Class;
struct ILocomotionBehaviour {
    struct ILocomotionBehaviour__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILocomotionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_ILocomotionBehaviour_FWDDECL
#include <Modloader/app/structs/ILocomotionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_ILocomotionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILocomotionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_ILocomotionBehaviour_FWDDECL)
#include <Modloader/app/structs/ILocomotionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILocomotionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
