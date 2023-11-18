#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_DEFINED
struct String;
struct Renderer;
struct Material;
struct LegacyFloatShaderPropertyAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct String* PropertyName;
    int32_t m_propertyID;
    struct Renderer* m_renderer;
    struct Material* m_material;
    float m_originalValue;
    struct Vector4 m_originalValueVector;
    bool AnimateVectorXYAsFloat;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyFloatShaderPropertyAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyFloatShaderPropertyAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyFloatShaderPropertyAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
