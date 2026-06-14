#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WorldRotation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WorldRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldRotation_DEFINED)
#include <Modloader/app/structs/WorldRotation__Fields.h>
#if defined(IL2CPP_STRUCT_WorldRotation__Fields_DEFINED)
#define IL2CPP_STRUCT_WorldRotation_DEFINED
struct WorldRotation__Class;
struct WorldRotation {
    struct WorldRotation__Class* klass;
    MonitorData* monitor;
    struct WorldRotation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WorldRotation_FWDDECL)
#define IL2CPP_STRUCT_WorldRotation_FWDDECL
#include <Modloader/app/structs/WorldRotation__Class.h>
#endif
#undef IL2CPP_STRUCT_WorldRotation_INITIALIZING
#if !defined(IL2CPP_STRUCT_WorldRotation_DEFINED) && !defined(IL2CPP_STRUCT_WorldRotation_FWDDECL)
#include <Modloader/app/structs/WorldRotation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WorldRotation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
