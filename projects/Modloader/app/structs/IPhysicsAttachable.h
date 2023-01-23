#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPhysicsAttachable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPhysicsAttachable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPhysicsAttachable_DEFINED)
#define IL2CPP_STRUCT_IPhysicsAttachable_DEFINED
struct IPhysicsAttachable__Class;
struct IPhysicsAttachable {
    struct IPhysicsAttachable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPhysicsAttachable_FWDDECL)
#define IL2CPP_STRUCT_IPhysicsAttachable_FWDDECL
#include <Modloader/app/structs/IPhysicsAttachable__Class.h>
#endif
#undef IL2CPP_STRUCT_IPhysicsAttachable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPhysicsAttachable_DEFINED) && !defined(IL2CPP_STRUCT_IPhysicsAttachable_FWDDECL)
#include <Modloader/app/structs/IPhysicsAttachable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPhysicsAttachable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
