#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPhysicsUpdateHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPhysicsUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPhysicsUpdateHandler_DEFINED)
#define IL2CPP_STRUCT_IPhysicsUpdateHandler_DEFINED
struct IPhysicsUpdateHandler__Class;
struct IPhysicsUpdateHandler {
    struct IPhysicsUpdateHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPhysicsUpdateHandler_FWDDECL)
#define IL2CPP_STRUCT_IPhysicsUpdateHandler_FWDDECL
#include <Modloader/app/structs/IPhysicsUpdateHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IPhysicsUpdateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPhysicsUpdateHandler_DEFINED) && !defined(IL2CPP_STRUCT_IPhysicsUpdateHandler_FWDDECL)
#include <Modloader/app/structs/IPhysicsUpdateHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPhysicsUpdateHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
