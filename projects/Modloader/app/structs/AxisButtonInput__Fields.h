#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisButtonInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisButtonInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisButtonInput__Fields_DEFINED)
#include <Modloader/app/structs/AxisButtonInput_AxisMode__Enum.h>
#include <Modloader/app/structs/CachedButtonInput__Fields.h>
#if defined(IL2CPP_STRUCT_CachedButtonInput__Fields_DEFINED) && defined(IL2CPP_STRUCT_AxisButtonInput_AxisMode__Enum_DEFINED)
#define IL2CPP_STRUCT_AxisButtonInput__Fields_DEFINED
struct IAxisInput;
struct AxisButtonInput__Fields {
    struct CachedButtonInput__Fields _;
    struct IAxisInput* m_axis;
    AxisButtonInput_AxisMode__Enum m_axisMode;

    float m_comparisonValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AxisButtonInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_AxisButtonInput__Fields_FWDDECL
#include <Modloader/app/structs/IAxisInput.h>
#endif
#undef IL2CPP_STRUCT_AxisButtonInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisButtonInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AxisButtonInput__Fields_FWDDECL)
#include <Modloader/app/structs/AxisButtonInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisButtonInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
