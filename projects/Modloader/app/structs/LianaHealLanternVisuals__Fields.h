#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_DEFINED
struct MoonTimeline;
struct UberTransformFollow;
struct LianaHealLanternVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* OnHitTimeline;
    struct MoonTimeline* OnDeathTimeline;
    struct UberTransformFollow* BulpVisualsUberTransformFollow;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/UberTransformFollow.h>
#endif
#undef IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LianaHealLanternVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/LianaHealLanternVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LianaHealLanternVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
