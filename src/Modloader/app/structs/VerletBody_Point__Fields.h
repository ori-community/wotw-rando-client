#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBody_Point__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBody_Point__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_Point__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VerletBody_Point__Fields_DEFINED
struct __declspec(align(8)) VerletBody_Point__Fields {
    struct Vector3 m_prevPosition;
    struct Vector3 m_position;
    struct Vector3 m_acceleration;
    float m_damping;
    float m_inverseMass;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBody_Point__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletBody_Point__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_VerletBody_Point__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_Point__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletBody_Point__Fields_FWDDECL)
#include <Modloader/app/structs/VerletBody_Point__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBody_Point__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
