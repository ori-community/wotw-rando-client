#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightSpear__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightSpear__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightSpear__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LightSpear__Fields_DEFINED
struct Rigidbody;
struct GameObject;
struct LightSpear__Fields {
    struct MonoBehaviour__Fields _;
    struct Rigidbody* m_rigidbody;
    int32_t m_hits;
    float Speed;
    struct GameObject* ImpactEffect;
    float Damage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightSpear__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightSpear__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_LightSpear__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightSpear__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightSpear__Fields_FWDDECL)
#include <Modloader/app/structs/LightSpear__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightSpear__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
