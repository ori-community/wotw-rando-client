#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NavMeshHit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NavMeshHit_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMeshHit_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_NavMeshHit_DEFINED
struct NavMeshHit {
    struct Vector3 m_Position;
    struct Vector3 m_Normal;
    float m_Distance;
    int32_t m_Mask;
    int32_t m_Hit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NavMeshHit_FWDDECL)
#define IL2CPP_STRUCT_NavMeshHit_FWDDECL
#endif
#undef IL2CPP_STRUCT_NavMeshHit_INITIALIZING
#if !defined(IL2CPP_STRUCT_NavMeshHit_DEFINED) && !defined(IL2CPP_STRUCT_NavMeshHit_FWDDECL)
#include <Modloader/app/structs/NavMeshHit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NavMeshHit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
