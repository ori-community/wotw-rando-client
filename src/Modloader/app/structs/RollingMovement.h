#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RollingMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RollingMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_RollingMovement_DEFINED)
#include <Modloader/app/structs/RollingMovement__Fields.h>
#if defined(IL2CPP_STRUCT_RollingMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_RollingMovement_DEFINED
struct RollingMovement__Class;
struct RollingMovement {
    struct RollingMovement__Class* klass;
    MonitorData* monitor;
    struct RollingMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RollingMovement_FWDDECL)
#define IL2CPP_STRUCT_RollingMovement_FWDDECL
#include <Modloader/app/structs/RollingMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_RollingMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_RollingMovement_DEFINED) && !defined(IL2CPP_STRUCT_RollingMovement_FWDDECL)
#include <Modloader/app/structs/RollingMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RollingMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
