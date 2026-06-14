#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Process_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Process_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Process_State__Enum_DEFINED)
#define IL2CPP_STRUCT_Process_State__Enum_DEFINED
enum class Process_State__Enum : int32_t {
    HaveId = 0x00000001,
    IsLocal = 0x00000002,
    IsNt = 0x00000004,
    HaveProcessInfo = 0x00000008,
    Exited = 0x00000010,
    Associated = 0x00000020,
    IsWin2k = 0x00000040,
    HaveNtProcessInfo = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_Process_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_Process_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Process_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Process_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Process_State__Enum_FWDDECL)
#include <Modloader/app/structs/Process_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Process_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
