#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaticEntityLocomotion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaticEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEntityLocomotion_DEFINED)
#include <Modloader/app/structs/StaticEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_StaticEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_StaticEntityLocomotion_DEFINED
struct StaticEntityLocomotion__Class;
struct StaticEntityLocomotion {
    struct StaticEntityLocomotion__Class* klass;
    MonitorData* monitor;
    struct StaticEntityLocomotion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaticEntityLocomotion_FWDDECL)
#define IL2CPP_STRUCT_StaticEntityLocomotion_FWDDECL
#include <Modloader/app/structs/StaticEntityLocomotion__Class.h>
#endif
#undef IL2CPP_STRUCT_StaticEntityLocomotion_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaticEntityLocomotion_DEFINED) && !defined(IL2CPP_STRUCT_StaticEntityLocomotion_FWDDECL)
#include <Modloader/app/structs/StaticEntityLocomotion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaticEntityLocomotion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
