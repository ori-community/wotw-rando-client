#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Levels__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Levels__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Levels__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Levels_Channel__Enum.h>
#include <Modloader/app/structs/Levels_ColorMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Levels_ColorMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Levels_Channel__Enum_DEFINED)
#define IL2CPP_STRUCT_Levels__Fields_DEFINED
struct Action_1_UnityEngine_RenderTexture_;
struct Levels__Fields {
    struct BaseEffect__Fields _;
    Levels_ColorMode__Enum Mode;

    struct Vector3 InputL;
    struct Vector3 InputR;
    struct Vector3 InputG;
    struct Vector3 InputB;
    struct Vector2 OutputL;
    struct Vector2 OutputR;
    struct Vector2 OutputG;
    struct Vector2 OutputB;
    Levels_Channel__Enum e_CurrentChannel;

    bool e_Logarithmic;
    bool e_AutoRefresh;
    struct Action_1_UnityEngine_RenderTexture_* e_OnFrameEnd;
    bool e_ForceRefresh;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Levels__Fields_FWDDECL)
#define IL2CPP_STRUCT_Levels__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_RenderTexture_.h>
#endif
#undef IL2CPP_STRUCT_Levels__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Levels__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Levels__Fields_FWDDECL)
#include <Modloader/app/structs/Levels__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Levels__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
