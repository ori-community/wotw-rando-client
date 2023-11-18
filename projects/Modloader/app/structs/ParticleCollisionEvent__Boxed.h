#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_DEFINED)
#include <Modloader/app/structs/ParticleCollisionEvent.h>
#if defined(IL2CPP_STRUCT_ParticleCollisionEvent_DEFINED)
#define IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_DEFINED
struct ParticleCollisionEvent__Class;
struct ParticleCollisionEvent__Boxed {
    struct ParticleCollisionEvent__Class* klass;
    MonitorData* monitor;
    struct ParticleCollisionEvent fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_FWDDECL
#include <Modloader/app/structs/ParticleCollisionEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ParticleCollisionEvent__Boxed_FWDDECL)
#include <Modloader/app/structs/ParticleCollisionEvent__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleCollisionEvent__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
