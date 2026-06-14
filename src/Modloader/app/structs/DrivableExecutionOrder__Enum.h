#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivableExecutionOrder__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivableExecutionOrder__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivableExecutionOrder__Enum_DEFINED)
#define IL2CPP_STRUCT_DrivableExecutionOrder__Enum_DEFINED
enum class DrivableExecutionOrder__Enum : int32_t {
    Lowest = -1000,
    Low = -500,
    Default = 0x00000000,
    High = 0x000001f4,
    Highest = 0x000003e8,
};
#endif
#if !defined(IL2CPP_STRUCT_DrivableExecutionOrder__Enum_FWDDECL)
#define IL2CPP_STRUCT_DrivableExecutionOrder__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DrivableExecutionOrder__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivableExecutionOrder__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DrivableExecutionOrder__Enum_FWDDECL)
#include <Modloader/app/structs/DrivableExecutionOrder__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivableExecutionOrder__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
