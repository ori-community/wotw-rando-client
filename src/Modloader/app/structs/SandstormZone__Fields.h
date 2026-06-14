#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandstormZone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandstormZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandstormZone__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/RectangleGameplayZone__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_RectangleGameplayZone__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED)
#define IL2CPP_STRUCT_SandstormZone__Fields_DEFINED
struct AnimationCurve;
struct Renderer;
struct SandstormZone__Fields {
    struct RectangleGameplayZone__Fields _;
    float WindStrength;
    struct Vector2 StormDirection;
    float WindCycleLength;
    struct AnimationCurve* WindStrengthCycleCurve;
    struct Renderer* DebugRenderer;
    struct Vector2 InnerBoundsOffset_deleteThis;
    bool IgnoreWindStrength;
    struct Bounds m_innerBounds;
    struct Bounds m_outerBounds;
    float m_timer;
    float m_startAlpha;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandstormZone__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandstormZone__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_SandstormZone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandstormZone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandstormZone__Fields_FWDDECL)
#include <Modloader/app/structs/SandstormZone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandstormZone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
