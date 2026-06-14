#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_DEFINED)
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_DEFINED
struct PhysicsUpdateHandlerAttribute__Class;
struct PhysicsUpdateHandlerAttribute {
    struct PhysicsUpdateHandlerAttribute__Class* klass;
    MonitorData* monitor;
    struct PhysicsUpdateHandlerAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_FWDDECL)
#define IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_FWDDECL
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsUpdateHandlerAttribute_FWDDECL)
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsUpdateHandlerAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
