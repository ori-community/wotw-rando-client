#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletChain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletChain__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VerletChain__Fields_DEFINED
struct Transform__Array;
struct VerletBody;
struct VerletChain__Fields {
    struct MonoBehaviour__Fields _;
    float Stiffness;
    float Mass;
    float Damping;
    struct Vector3 Gravity;
    struct Transform__Array* Points;
    struct VerletBody* m_verletBody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletChain__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletChain__Fields_FWDDECL
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/VerletBody.h>
#endif
#undef IL2CPP_STRUCT_VerletChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletChain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletChain__Fields_FWDDECL)
#include <Modloader/app/structs/VerletChain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletChain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
