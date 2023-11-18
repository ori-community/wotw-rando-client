#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeightController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeightController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeightController__Fields_DEFINED)
#include <Modloader/app/structs/Ease_Easing__Enum.h>
#if defined(IL2CPP_STRUCT_Ease_Easing__Enum_DEFINED)
#define IL2CPP_STRUCT_WeightController__Fields_DEFINED
struct __declspec(align(8)) WeightController__Fields {
    float SpeedIn;
    float SpeedOut;
    Ease_Easing__Enum m_easingFunction;

    float m_timer;
    float m_weight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeightController__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeightController__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WeightController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeightController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeightController__Fields_FWDDECL)
#include <Modloader/app/structs/WeightController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeightController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
