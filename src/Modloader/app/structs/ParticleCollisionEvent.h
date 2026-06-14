#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParticleCollisionEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParticleCollisionEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleCollisionEvent_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ParticleCollisionEvent_DEFINED
struct ParticleCollisionEvent {
    struct Vector3 m_Intersection;
    struct Vector3 m_Normal;
    struct Vector3 m_Velocity;
    int32_t m_ColliderInstanceID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ParticleCollisionEvent_FWDDECL)
#define IL2CPP_STRUCT_ParticleCollisionEvent_FWDDECL
#endif
#undef IL2CPP_STRUCT_ParticleCollisionEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParticleCollisionEvent_DEFINED) && !defined(IL2CPP_STRUCT_ParticleCollisionEvent_FWDDECL)
#include <Modloader/app/structs/ParticleCollisionEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParticleCollisionEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
