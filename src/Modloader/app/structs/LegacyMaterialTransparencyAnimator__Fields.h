#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_DEFINED
struct String;
struct Renderer;
struct LegacyMaterialTransparencyAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct String* Property;
    int32_t _PropertyID;
    float m_originalValue;
    struct Renderer* m_renderer;
    bool m_madeMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyMaterialTransparencyAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyMaterialTransparencyAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyMaterialTransparencyAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
