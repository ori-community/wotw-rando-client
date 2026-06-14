#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_DEFINED
struct Color__Array;
struct Single__Array;
struct UberShaderProperty_Color__Enum__Array;
struct Collider;
struct Renderer;
struct LegacyTransparancyAnimator__Fields {
    struct LegacyAnimator__Fields _;
    bool DestroyWhenInvisible;
    bool DeactivateWhenInvisible;
    struct Color__Array* m_colors;
    struct Single__Array* m_originalAlphas;
    struct UberShaderProperty_Color__Enum__Array* m_colorPropertyNames;
    bool m_isDirty;
    struct Collider* m_collider;
    bool OptimizeRenderEnable;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTransparancyAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyTransparancyAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTransparancyAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
