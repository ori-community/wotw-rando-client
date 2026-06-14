#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionEventHandler_DEFINED)
#include <Modloader/app/structs/CollisionEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_CollisionEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionEventHandler_DEFINED
struct CollisionEventHandler__Class;
struct CollisionEventHandler {
    struct CollisionEventHandler__Class* klass;
    MonitorData* monitor;
    struct CollisionEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionEventHandler_FWDDECL)
#define IL2CPP_STRUCT_CollisionEventHandler_FWDDECL
#include <Modloader/app/structs/CollisionEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_CollisionEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_CollisionEventHandler_FWDDECL)
#include <Modloader/app/structs/CollisionEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
