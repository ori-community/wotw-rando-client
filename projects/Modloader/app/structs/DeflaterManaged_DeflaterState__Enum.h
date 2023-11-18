#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_DEFINED)
#define IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_DEFINED
enum class DeflaterManaged_DeflaterState__Enum : int32_t {
    NotStarted = 0x00000000,
    SlowDownForIncompressible1 = 0x00000001,
    SlowDownForIncompressible2 = 0x00000002,
    StartingSmallData = 0x00000003,
    CompressThenCheck = 0x00000004,
    CheckingForIncompressible = 0x00000005,
    HandlingSmallData = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_FWDDECL)
#define IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DeflaterManaged_DeflaterState__Enum_FWDDECL)
#include <Modloader/app/structs/DeflaterManaged_DeflaterState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflaterManaged_DeflaterState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
