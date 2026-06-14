#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnowBall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnowBall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnowBall__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SnowBall__Fields_DEFINED
struct Rigidbody;
struct SnowBall__Fields {
    struct MonoBehaviour__Fields _;
    float MaxScale;
    float ScaleUpSpeed;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_originalScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnowBall__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnowBall__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_SnowBall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnowBall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnowBall__Fields_FWDDECL)
#include <Modloader/app/structs/SnowBall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnowBall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
