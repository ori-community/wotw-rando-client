#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DealDamageSphere__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DealDamageSphere__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageSphere__Fields_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_DealDamageSphere__Fields_DEFINED
struct Transform;
struct DealDamageSphere__Fields {
    struct MonoBehaviour__Fields _;
    float Radius;
    float Delay;
    DamageType__Enum DamageType;

    int32_t Damage;
    struct Transform* m_transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DealDamageSphere__Fields_FWDDECL)
#define IL2CPP_STRUCT_DealDamageSphere__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DealDamageSphere__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DealDamageSphere__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DealDamageSphere__Fields_FWDDECL)
#include <Modloader/app/structs/DealDamageSphere__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DealDamageSphere__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
