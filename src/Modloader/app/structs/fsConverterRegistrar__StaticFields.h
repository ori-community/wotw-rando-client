#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_DEFINED)
#define IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_DEFINED
struct AnimationCurve_DirectConverter;
struct Bounds_DirectConverter;
struct Gradient_DirectConverter;
struct GUIStyle_DirectConverter;
struct GUIStyleState_DirectConverter;
struct Keyframe_DirectConverter;
struct LayerMask_DirectConverter;
struct Rect_DirectConverter;
struct RectOffset_DirectConverter;
struct List_1_System_Type_;
struct fsConverterRegistrar__StaticFields {
    struct AnimationCurve_DirectConverter* Register_AnimationCurve_DirectConverter;
    struct Bounds_DirectConverter* Register_Bounds_DirectConverter;
    struct Gradient_DirectConverter* Register_Gradient_DirectConverter;
    struct GUIStyle_DirectConverter* Register_GUIStyle_DirectConverter;
    struct GUIStyleState_DirectConverter* Register_GUIStyleState_DirectConverter;
    struct Keyframe_DirectConverter* Register_Keyframe_DirectConverter;
    struct LayerMask_DirectConverter* Register_LayerMask_DirectConverter;
    struct Rect_DirectConverter* Register_Rect_DirectConverter;
    struct RectOffset_DirectConverter* Register_RectOffset_DirectConverter;
    struct List_1_System_Type_* Converters;
};
#endif
#if !defined(IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_FWDDECL
#include <Modloader/app/structs/AnimationCurve_DirectConverter.h>
#include <Modloader/app/structs/Bounds_DirectConverter.h>
#include <Modloader/app/structs/GUIStyleState_DirectConverter.h>
#include <Modloader/app/structs/GUIStyle_DirectConverter.h>
#include <Modloader/app/structs/Gradient_DirectConverter.h>
#include <Modloader/app/structs/Keyframe_DirectConverter.h>
#include <Modloader/app/structs/LayerMask_DirectConverter.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/RectOffset_DirectConverter.h>
#include <Modloader/app/structs/Rect_DirectConverter.h>
#endif
#undef IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_fsConverterRegistrar__StaticFields_FWDDECL)
#include <Modloader/app/structs/fsConverterRegistrar__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsConverterRegistrar__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
