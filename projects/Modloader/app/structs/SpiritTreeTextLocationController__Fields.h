#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_DEFINED
struct AnimationCurve;
struct SpiritTreeTextLocationController__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 m_worldPosition;
    struct AnimationCurve* ScreenPositionInfluenceCurve;
    struct Vector2 ScreenPosition;
    float ScreenWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritTreeTextLocationController__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritTreeTextLocationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritTreeTextLocationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
