#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteState__Enum_DEFINED)
#define IL2CPP_STRUCT_WriteState__Enum_DEFINED
enum class WriteState__Enum : int32_t {
    Start = 0x00000000,
    Prolog = 0x00000001,
    Element = 0x00000002,
    Attribute = 0x00000003,
    Content = 0x00000004,
    Closed = 0x00000005,
    Error = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_WriteState__Enum_FWDDECL)
#define IL2CPP_STRUCT_WriteState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WriteState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WriteState__Enum_FWDDECL)
#include <Modloader/app/structs/WriteState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
