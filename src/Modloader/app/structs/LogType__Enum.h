#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogType__Enum_DEFINED)
#define IL2CPP_STRUCT_LogType__Enum_DEFINED
enum class LogType__Enum : int32_t {
    Error = 0x00000000,
    Assert = 0x00000001,
    Warning = 0x00000002,
    Log = 0x00000003,
    Exception = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_LogType__Enum_FWDDECL)
#define IL2CPP_STRUCT_LogType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LogType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LogType__Enum_FWDDECL)
#include <Modloader/app/structs/LogType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
