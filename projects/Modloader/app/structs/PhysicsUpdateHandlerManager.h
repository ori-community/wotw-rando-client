#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsUpdateHandlerManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager_DEFINED)
#include <Modloader/app/structs/PhysicsUpdateHandlerManager__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerManager_DEFINED
struct PhysicsUpdateHandlerManager__Class;
struct PhysicsUpdateHandlerManager {
    struct PhysicsUpdateHandlerManager__Class* klass;
    MonitorData* monitor;
    struct PhysicsUpdateHandlerManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager_FWDDECL)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerManager_FWDDECL
#include <Modloader/app/structs/PhysicsUpdateHandlerManager__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsUpdateHandlerManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager_FWDDECL)
#include <Modloader/app/structs/PhysicsUpdateHandlerManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsUpdateHandlerManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
