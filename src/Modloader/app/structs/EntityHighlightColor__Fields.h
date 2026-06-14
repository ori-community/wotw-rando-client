#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHighlightColor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHighlightColor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHighlightColor__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_UberShaderProperty_Color__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityHighlightColor__Fields_DEFINED
struct GameObject;
struct Renderer;
struct String;
struct EntityHighlightColor__Fields {
    struct MonoBehaviour__Fields _;
    struct Color BashHighlight;
    struct Color SpiritFlameHighlight;
    struct Color m_originalColor;
    UberShaderProperty_Color__Enum ColorProperty;

    struct GameObject* TargetObject;
    struct Renderer* m_renderer;
    struct Color m_targetColor;
    struct GameObject* m_targetObject;
    bool m_isInScene;
    struct String* OldStringProperty;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHighlightColor__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityHighlightColor__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EntityHighlightColor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHighlightColor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityHighlightColor__Fields_FWDDECL)
#include <Modloader/app/structs/EntityHighlightColor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHighlightColor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
