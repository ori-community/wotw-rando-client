#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageText__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageText__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DamageText__Fields_DEFINED
struct AnimationCurve;
struct DamageText__Fields {
    struct Suspendable__Fields _;
    struct Color Red;
    struct Color Zero;
    struct AnimationCurve* SizeByDamageAmount;
    struct Vector3 m_speed;
    float m_time;
    bool _IsSuspended_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageText__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageText__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_DamageText__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageText__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageText__Fields_FWDDECL)
#include <Modloader/app/structs/DamageText__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageText__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
