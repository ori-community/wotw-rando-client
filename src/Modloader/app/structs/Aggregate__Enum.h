#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Aggregate__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Aggregate__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Aggregate__Enum_DEFINED)
#define IL2CPP_STRUCT_Aggregate__Enum_DEFINED
enum class Aggregate__Enum : int32_t {
    None = -1,
    Sum = 0x0000001e,
    Avg = 0x0000001f,
    Min = 0x00000020,
    Max = 0x00000021,
    Count = 0x00000022,
    StDev = 0x00000023,
    Var = 0x00000025,
};
#endif
#if !defined(IL2CPP_STRUCT_Aggregate__Enum_FWDDECL)
#define IL2CPP_STRUCT_Aggregate__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Aggregate__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Aggregate__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Aggregate__Enum_FWDDECL)
#include <Modloader/app/structs/Aggregate__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Aggregate__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
