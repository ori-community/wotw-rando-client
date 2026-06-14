#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PressurePlate_Target__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PressurePlate_Target__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlate_Target__Enum_DEFINED)
#define IL2CPP_STRUCT_PressurePlate_Target__Enum_DEFINED
enum class PressurePlate_Target__Enum : int32_t {
    Ori = 0x00000001,
    PushPullBlock = 0x00000002,
    Interface = 0x00000004,
    InterfaceExceptOri = 0x00000008,
    All = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_PressurePlate_Target__Enum_FWDDECL)
#define IL2CPP_STRUCT_PressurePlate_Target__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PressurePlate_Target__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlate_Target__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PressurePlate_Target__Enum_FWDDECL)
#include <Modloader/app/structs/PressurePlate_Target__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PressurePlate_Target__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
