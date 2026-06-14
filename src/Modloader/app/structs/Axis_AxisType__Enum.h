#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Axis_AxisType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Axis_AxisType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Axis_AxisType__Enum_DEFINED)
#define IL2CPP_STRUCT_Axis_AxisType__Enum_DEFINED
enum class Axis_AxisType__Enum : int32_t {
    Ancestor = 0x00000000,
    AncestorOrSelf = 0x00000001,
    Attribute = 0x00000002,
    Child = 0x00000003,
    Descendant = 0x00000004,
    DescendantOrSelf = 0x00000005,
    Following = 0x00000006,
    FollowingSibling = 0x00000007,
    Namespace = 0x00000008,
    Parent = 0x00000009,
    Preceding = 0x0000000a,
    PrecedingSibling = 0x0000000b,
    Self = 0x0000000c,
    None = 0x0000000d,
};
#endif
#if !defined(IL2CPP_STRUCT_Axis_AxisType__Enum_FWDDECL)
#define IL2CPP_STRUCT_Axis_AxisType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Axis_AxisType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Axis_AxisType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Axis_AxisType__Enum_FWDDECL)
#include <Modloader/app/structs/Axis_AxisType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Axis_AxisType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
