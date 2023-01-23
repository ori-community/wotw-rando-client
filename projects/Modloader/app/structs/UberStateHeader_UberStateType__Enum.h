#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_DEFINED)
#define IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_DEFINED
enum class UberStateHeader_UberStateType__Enum : int32_t {
    Uninitialized = 0x00000000,
    Int = 0x00000001,
    Float = 0x00000002,
    Boolean = 0x00000003,
    Byte = 0x00000004,
    Player = 0x00000005,
    SavePedestal = 0x00000006,
    OldSaveNoType = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_FWDDECL)
#define IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UberStateHeader_UberStateType__Enum_FWDDECL)
#include <Modloader/app/structs/UberStateHeader_UberStateType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateHeader_UberStateType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
