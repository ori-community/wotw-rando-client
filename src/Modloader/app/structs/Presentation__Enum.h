#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Presentation__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Presentation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Presentation__Enum_DEFINED)
#define IL2CPP_STRUCT_Presentation__Enum_DEFINED
enum class Presentation__Enum : int32_t {
    Avg = 0x00000000,
    Peak = 0x00000001,
    Count = 0x00000002,
    PeakCount = 0x00000003,
    Sum = 0x00000004,
    SumPlusCount = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_Presentation__Enum_FWDDECL)
#define IL2CPP_STRUCT_Presentation__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Presentation__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Presentation__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Presentation__Enum_FWDDECL)
#include <Modloader/app/structs/Presentation__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Presentation__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
