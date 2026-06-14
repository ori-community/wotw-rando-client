#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MessageControllerB_NpcMessageStyle__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MessageControllerB_NpcMessageStyle__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_DEFINED
struct ShowFixedTimeTextEntity_TextVisuals;
struct MessageBoxLanguageStyles;
struct Transform;
struct __declspec(align(8)) ShowFixedTimeTextEntity_TextVisuals__Fields {
    struct ShowFixedTimeTextEntity_TextVisuals* InitVisuals;
    struct MessageBoxLanguageStyles* OverrideStyle;
    struct Vector3 Offset;
    float Scale;
    float FontSize;
    float LineWidth;
    float LineSpacing;
    float FadeInTime;
    float FadeOutTime;
    float BackgroundFadeOffset;
    float LettersPerSecond;
    bool ShouldAppearLetterByLetter;
    struct Vector2 MessageBoxVelocity;
    struct Transform* TextBackground;
    MessageControllerB_NpcMessageStyle__Enum Style;

    struct Transform* TextBackgroundInstance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_FWDDECL
#include <Modloader/app/structs/MessageBoxLanguageStyles.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowFixedTimeTextEntity_TextVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
