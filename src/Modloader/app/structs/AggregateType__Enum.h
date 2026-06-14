#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AggregateType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AggregateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateType__Enum_DEFINED)
#define IL2CPP_STRUCT_AggregateType__Enum_DEFINED
enum class AggregateType__Enum : int32_t {
    None = 0x00000000,
    Sum = 0x00000004,
    Mean = 0x00000005,
    Min = 0x00000006,
    Max = 0x00000007,
    First = 0x00000008,
    Count = 0x00000009,
    Var = 0x0000000a,
    StDev = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_AggregateType__Enum_FWDDECL)
#define IL2CPP_STRUCT_AggregateType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AggregateType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AggregateType__Enum_FWDDECL)
#include <Modloader/app/structs/AggregateType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AggregateType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
