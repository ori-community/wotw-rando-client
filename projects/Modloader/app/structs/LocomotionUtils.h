#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionUtils_DEFINED)
#define IL2CPP_STRUCT_LocomotionUtils_DEFINED
struct LocomotionUtils__Class;
struct LocomotionUtils {
    struct LocomotionUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LocomotionUtils_FWDDECL)
#define IL2CPP_STRUCT_LocomotionUtils_FWDDECL
#include <Modloader/app/structs/LocomotionUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_LocomotionUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionUtils_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionUtils_FWDDECL)
#include <Modloader/app/structs/LocomotionUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
