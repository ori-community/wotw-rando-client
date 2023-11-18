#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadPriority__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadPriority__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPriority__Enum_DEFINED)
#define IL2CPP_STRUCT_ThreadPriority__Enum_DEFINED
enum class ThreadPriority__Enum : int32_t {
    Lowest = 0x00000000,
    BelowNormal = 0x00000001,
    Normal = 0x00000002,
    AboveNormal = 0x00000003,
    Highest = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadPriority__Enum_FWDDECL)
#define IL2CPP_STRUCT_ThreadPriority__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ThreadPriority__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadPriority__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ThreadPriority__Enum_FWDDECL)
#include <Modloader/app/structs/ThreadPriority__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadPriority__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
