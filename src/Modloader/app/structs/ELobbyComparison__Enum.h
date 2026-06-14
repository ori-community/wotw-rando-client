#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ELobbyComparison__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ELobbyComparison__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ELobbyComparison__Enum_DEFINED)
#define IL2CPP_STRUCT_ELobbyComparison__Enum_DEFINED
enum class ELobbyComparison__Enum : int32_t {
    k_ELobbyComparisonEqualToOrLessThan = -2,
    k_ELobbyComparisonLessThan = -1,
    k_ELobbyComparisonEqual = 0x00000000,
    k_ELobbyComparisonGreaterThan = 0x00000001,
    k_ELobbyComparisonEqualToOrGreaterThan = 0x00000002,
    k_ELobbyComparisonNotEqual = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_ELobbyComparison__Enum_FWDDECL)
#define IL2CPP_STRUCT_ELobbyComparison__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ELobbyComparison__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ELobbyComparison__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ELobbyComparison__Enum_FWDDECL)
#include <Modloader/app/structs/ELobbyComparison__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ELobbyComparison__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
