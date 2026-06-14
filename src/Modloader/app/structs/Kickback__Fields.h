#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Kickback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Kickback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Kickback__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Kickback__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) Kickback__Fields {
    struct AnimationCurve* KickbackCurve;
    float m_kickbackTimeRemaining;
    float m_kickbackMultiplier;
    struct Vector2 _KickbackDirection_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Kickback__Fields_FWDDECL)
#define IL2CPP_STRUCT_Kickback__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_Kickback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Kickback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Kickback__Fields_FWDDECL)
#include <Modloader/app/structs/Kickback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Kickback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
