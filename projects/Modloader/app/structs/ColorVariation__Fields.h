#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorVariation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorVariation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariation__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorVariation__Fields_DEFINED
struct Renderer__Array;
struct Color__Array;
struct Vector4__Array;
struct Vector3__Array;
struct MoonGuid;
struct ColorVariation__Fields {
    struct MonoBehaviour__Fields _;
    struct Renderer__Array* m_renderers;
    struct Color__Array* m_cachedColors;
    struct Vector4__Array* m_cachedPositions;
    struct Vector3__Array* m_cachedLossyScales;
    struct Vector4__Array* m_cachedSlicesRanges;
    float m_time;
    float m_speed;
    int32_t m_triesToGetRenderers;
    struct MoonGuid* MetaDataGUID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorVariation__Fields_FWDDECL)
#define IL2CPP_STRUCT_ColorVariation__Fields_FWDDECL
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_ColorVariation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorVariation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ColorVariation__Fields_FWDDECL)
#include <Modloader/app/structs/ColorVariation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorVariation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
