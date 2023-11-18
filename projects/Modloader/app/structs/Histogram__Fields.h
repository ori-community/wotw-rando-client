#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Histogram__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Histogram__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Histogram__Fields_DEFINED)
#include <Modloader/app/structs/Histogram_Channel__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Histogram_Channel__Enum_DEFINED)
#define IL2CPP_STRUCT_Histogram__Fields_DEFINED
struct Action_1_UnityEngine_RenderTexture_;
struct Histogram__Fields {
    struct MonoBehaviour__Fields _;
    Histogram_Channel__Enum e_CurrentChannel;

    bool e_Logarithmic;
    bool e_AutoRefresh;
    struct Action_1_UnityEngine_RenderTexture_* e_OnFrameEnd;
    bool e_ForceRefresh;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Histogram__Fields_FWDDECL)
#define IL2CPP_STRUCT_Histogram__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_RenderTexture_.h>
#endif
#undef IL2CPP_STRUCT_Histogram__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Histogram__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Histogram__Fields_FWDDECL)
#include <Modloader/app/structs/Histogram__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Histogram__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
