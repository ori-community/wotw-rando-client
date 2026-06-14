#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EComparison__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EComparison__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EComparison__Enum_DEFINED)
#define IL2CPP_STRUCT_EComparison__Enum_DEFINED
enum class EComparison__Enum : int32_t {
    LT = 0x00000000,
    LE = 0x00000001,
    EQ = 0x00000002,
    GE = 0x00000003,
    GT = 0x00000004,
    NE = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_EComparison__Enum_FWDDECL)
#define IL2CPP_STRUCT_EComparison__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EComparison__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EComparison__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EComparison__Enum_FWDDECL)
#include <Modloader/app/structs/EComparison__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EComparison__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
