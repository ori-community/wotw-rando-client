#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapEatCounter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapEatCounter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEatCounter__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapEatCounter__Fields_DEFINED
struct MoonTimeline;
struct Transform;
struct SnapTrapEatCounter__Fields {
    struct MonoBehaviour__Fields _;
    int32_t EnemiesEatenExplodeCount;
    struct MoonTimeline* ExplodeTimeline;
    struct Transform* StomachTransform;
    float StomachScaleAmount;
    int32_t m_eatenEnemiesCount;
    float m_originalStomachScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapEatCounter__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapEatCounter__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapEatCounter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapEatCounter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapEatCounter__Fields_FWDDECL)
#include <Modloader/app/structs/SnapTrapEatCounter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapEatCounter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
