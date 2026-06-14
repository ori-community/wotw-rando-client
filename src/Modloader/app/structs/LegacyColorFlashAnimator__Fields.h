#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_DEFINED
struct Color__Array;
struct UberShaderProperty_Color__Enum__Array;
struct Renderer;
struct LegacyColorFlashAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct Color FlashColor;
    struct Color__Array* m_originalColors;
    struct UberShaderProperty_Color__Enum__Array* m_colorPropertyNames;
    bool m_isDirty;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyColorFlashAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyColorFlashAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyColorFlashAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
