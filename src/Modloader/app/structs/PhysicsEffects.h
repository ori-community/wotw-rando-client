#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsEffects_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsEffects_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEffects_DEFINED)
#include <Modloader/app/structs/PhysicsEffects__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsEffects__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsEffects_DEFINED
struct PhysicsEffects__Class;
struct PhysicsEffects {
    struct PhysicsEffects__Class* klass;
    MonitorData* monitor;
    struct PhysicsEffects__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsEffects_FWDDECL)
#define IL2CPP_STRUCT_PhysicsEffects_FWDDECL
#include <Modloader/app/structs/PhysicsEffects__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsEffects_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEffects_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsEffects_FWDDECL)
#include <Modloader/app/structs/PhysicsEffects.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsEffects.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
