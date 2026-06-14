#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUI__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUI__StaticFields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_GUI__StaticFields_DEFINED
struct GUISkin;
struct GenericStack;
struct GUI__StaticFields {
    int32_t s_ScrollControlId;
    int32_t s_HotTextField;
    int32_t s_BoxHash;
    int32_t s_ButonHash;
    int32_t s_RepeatButtonHash;
    int32_t s_ToggleHash;
    int32_t s_ButtonGridHash;
    int32_t s_SliderHash;
    int32_t s_BeginGroupHash;
    int32_t s_ScrollviewHash;
    int32_t _scrollTroughSide_k__BackingField;
    struct DateTime _nextScrollStepTime_k__BackingField;
    struct GUISkin* s_Skin;
    struct GenericStack* s_ScrollViewStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUI__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GUI__StaticFields_FWDDECL
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/GenericStack.h>
#endif
#undef IL2CPP_STRUCT_GUI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUI__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GUI__StaticFields_FWDDECL)
#include <Modloader/app/structs/GUI__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUI__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
