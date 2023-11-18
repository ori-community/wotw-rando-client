#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WriteState__Enum_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WriteState__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteState__Enum_1_DEFINED)
#define IL2CPP_STRUCT_WriteState__Enum_1_DEFINED
enum class WriteState__Enum_1 : int32_t {
    Error = 0x00000000,
    Closed = 0x00000001,
    Object = 0x00000002,
    Array = 0x00000003,
    Constructor = 0x00000004,
    Property = 0x00000005,
    Start = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_WriteState__Enum_1_FWDDECL)
#define IL2CPP_STRUCT_WriteState__Enum_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_WriteState__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_WriteState__Enum_1_DEFINED) && !defined(IL2CPP_STRUCT_WriteState__Enum_1_FWDDECL)
#include <Modloader/app/structs/WriteState__Enum_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WriteState__Enum_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
