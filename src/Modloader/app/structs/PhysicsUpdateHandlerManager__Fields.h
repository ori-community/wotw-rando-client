#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_DEFINED
struct IPhysicsUpdateHandler__Array;
struct IJobSystem__Array;
struct __declspec(align(8)) PhysicsUpdateHandlerManager__Fields {
    struct IPhysicsUpdateHandler__Array* m_updateHandlers;
    struct IPhysicsUpdateHandler__Array* m_updateHandlersFixed;
    struct IJobSystem__Array* m_jobSystems;
    struct IJobSystem__Array* m_jobSystemsFixed;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_FWDDECL
#include <Modloader/app/structs/IJobSystem__Array.h>
#include <Modloader/app/structs/IPhysicsUpdateHandler__Array.h>
#endif
#undef IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerManager__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsUpdateHandlerManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsUpdateHandlerManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
