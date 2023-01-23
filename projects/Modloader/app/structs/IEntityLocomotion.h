#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEntityLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityLocomotion_DEFINED)
#define IL2CPP_STRUCT_IEntityLocomotion_DEFINED
struct IEntityLocomotion__Class;
struct IEntityLocomotion {
    struct IEntityLocomotion__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEntityLocomotion_FWDDECL)
#define IL2CPP_STRUCT_IEntityLocomotion_FWDDECL
#include <Modloader/app/structs/IEntityLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_IEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_IEntityLocomotion_FWDDECL)
#include <Modloader/app/structs/IEntityLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEntityLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
