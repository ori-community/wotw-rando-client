#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsRaycaster_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsRaycaster_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsRaycaster_DEFINED)
#include <Modloader/app/structs/PhysicsRaycaster__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsRaycaster__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsRaycaster_DEFINED
struct PhysicsRaycaster__Class;
struct PhysicsRaycaster {
    struct PhysicsRaycaster__Class* klass;
    MonitorData* monitor;
    struct PhysicsRaycaster__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsRaycaster_FWDDECL)
#define IL2CPP_STRUCT_PhysicsRaycaster_FWDDECL
#include <Modloader/app/structs/PhysicsRaycaster__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsRaycaster_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsRaycaster_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsRaycaster_FWDDECL)
#include <Modloader/app/structs/PhysicsRaycaster.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsRaycaster.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
