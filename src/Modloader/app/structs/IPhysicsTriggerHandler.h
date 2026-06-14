#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPhysicsTriggerHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPhysicsTriggerHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPhysicsTriggerHandler_DEFINED)
#define IL2CPP_STRUCT_IPhysicsTriggerHandler_DEFINED
struct IPhysicsTriggerHandler__Class;
struct IPhysicsTriggerHandler {
    struct IPhysicsTriggerHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPhysicsTriggerHandler_FWDDECL)
#define IL2CPP_STRUCT_IPhysicsTriggerHandler_FWDDECL
#include <Modloader/app/structs/IPhysicsTriggerHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_IPhysicsTriggerHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPhysicsTriggerHandler_DEFINED) && !defined(IL2CPP_STRUCT_IPhysicsTriggerHandler_FWDDECL)
#include <Modloader/app/structs/IPhysicsTriggerHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPhysicsTriggerHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
