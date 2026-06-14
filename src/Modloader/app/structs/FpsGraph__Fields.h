#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FpsGraph__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FpsGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FpsGraph__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_FpsGraph__Fields_DEFINED
struct Color__Array;
struct Material;
struct FrameInfo__Array;
struct Stopwatch;
struct FpsGraph__Fields {
    struct MonoBehaviour__Fields _;
    int32_t GraphMinFPS;
    int32_t GraphMaxFPS;
    int32_t GraphHeight;
    float GraphScale;
    struct Vector2 GraphPositionOffset;
    struct Color__Array* GraphColors;
    struct Color LineColor;
    struct Color GraphBackgroundColor;
    struct Material* m_material;
    struct FrameInfo__Array* Frames;
    int32_t HistoryLength;
    int32_t m_frameIndex;
    float FPSRefreshFrequency;
    struct Stopwatch* m_stopWatch;
    float m_fpsRefreshTime;
    float m_lastUpdateRealtime;
    float m_lastUpdateTime;
    float m_lastLateUpdateTime;
    float m_lastPostRenderTime;
    int32_t m_frameCount;
    int32_t m_currentAverageFps;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FpsGraph__Fields_FWDDECL)
#define IL2CPP_STRUCT_FpsGraph__Fields_FWDDECL
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/FrameInfo__Array.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_FpsGraph__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FpsGraph__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FpsGraph__Fields_FWDDECL)
#include <Modloader/app/structs/FpsGraph__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FpsGraph__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
