#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionContext_DEFINED)
#include <Modloader/app/structs/CollisionContext__Fields.h>
#if defined(IL2CPP_STRUCT_CollisionContext__Fields_DEFINED)
#define IL2CPP_STRUCT_CollisionContext_DEFINED
struct CollisionContext__Class;
struct CollisionContext {
    struct CollisionContext__Class* klass;
    MonitorData* monitor;
    struct CollisionContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionContext_FWDDECL)
#define IL2CPP_STRUCT_CollisionContext_FWDDECL
#include <Modloader/app/structs/CollisionContext__Class.h>
#endif
#undef IL2CPP_STRUCT_CollisionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionContext_DEFINED) && !defined(IL2CPP_STRUCT_CollisionContext_FWDDECL)
#include <Modloader/app/structs/CollisionContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
