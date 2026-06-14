#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Shadow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Shadow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shadow__Fields_DEFINED)
#include <Modloader/app/structs/BaseMeshEffect__Fields.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_BaseMeshEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Shadow__Fields_DEFINED
struct Shadow__Fields {
    struct BaseMeshEffect__Fields _;
    struct Color m_EffectColor;
    struct Vector2 m_EffectDistance;
    bool m_UseGraphicAlpha;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Shadow__Fields_FWDDECL)
#define IL2CPP_STRUCT_Shadow__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Shadow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Shadow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Shadow__Fields_FWDDECL)
#include <Modloader/app/structs/Shadow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Shadow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
