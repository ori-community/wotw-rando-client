#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorVisuals_DEFINED)
#include <Modloader/app/structs/DoorVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_DoorVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_DoorVisuals_DEFINED
struct DoorVisuals__Class;
struct DoorVisuals {
    struct DoorVisuals__Class* klass;
    MonitorData* monitor;
    struct DoorVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorVisuals_FWDDECL)
#define IL2CPP_STRUCT_DoorVisuals_FWDDECL
#include <Modloader/app/structs/DoorVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_DoorVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorVisuals_DEFINED) && !defined(IL2CPP_STRUCT_DoorVisuals_FWDDECL)
#include <Modloader/app/structs/DoorVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
