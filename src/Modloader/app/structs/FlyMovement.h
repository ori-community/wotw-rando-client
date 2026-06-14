#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlyMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlyMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlyMovement_DEFINED)
#include <Modloader/app/structs/FlyMovement__Fields.h>
#if defined(IL2CPP_STRUCT_FlyMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_FlyMovement_DEFINED
struct FlyMovement__Class;
struct FlyMovement {
    struct FlyMovement__Class* klass;
    MonitorData* monitor;
    struct FlyMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlyMovement_FWDDECL)
#define IL2CPP_STRUCT_FlyMovement_FWDDECL
#include <Modloader/app/structs/FlyMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_FlyMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlyMovement_DEFINED) && !defined(IL2CPP_STRUCT_FlyMovement_FWDDECL)
#include <Modloader/app/structs/FlyMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlyMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
