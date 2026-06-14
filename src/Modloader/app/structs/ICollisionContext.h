#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ICollisionContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ICollisionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICollisionContext_DEFINED)
#define IL2CPP_STRUCT_ICollisionContext_DEFINED
struct ICollisionContext__Class;
struct ICollisionContext {
    struct ICollisionContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ICollisionContext_FWDDECL)
#define IL2CPP_STRUCT_ICollisionContext_FWDDECL
#include <Modloader/app/structs/ICollisionContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ICollisionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ICollisionContext_DEFINED) && !defined(IL2CPP_STRUCT_ICollisionContext_FWDDECL)
#include <Modloader/app/structs/ICollisionContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ICollisionContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
