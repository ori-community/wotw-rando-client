#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PipeOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PipeOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PipeOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_PipeOptions__Enum_DEFINED
enum class PipeOptions__Enum : int32_t {
    None = 0x00000000,
    WriteThrough = -2147483648,
    Asynchronous = 0x40000000,
};
#endif
#if !defined(IL2CPP_STRUCT_PipeOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_PipeOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PipeOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PipeOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PipeOptions__Enum_FWDDECL)
#include <Modloader/app/structs/PipeOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PipeOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
