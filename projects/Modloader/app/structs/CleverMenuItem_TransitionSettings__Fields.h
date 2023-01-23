#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/UberShaderProperty_Color__Enum.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty_Color__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_DEFINED
struct __declspec(align(8)) CleverMenuItem_TransitionSettings__Fields {
    UberShaderProperty_Color__Enum ColorProperty;

    struct Color NormalColor;
    struct Color HighlightedColor;
    struct Color DisabledColor;
    float TweenDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuItem_TransitionSettings__Fields_FWDDECL)
#include <Modloader/app/structs/CleverMenuItem_TransitionSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuItem_TransitionSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
