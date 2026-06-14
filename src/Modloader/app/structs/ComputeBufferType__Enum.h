#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComputeBufferType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComputeBufferType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComputeBufferType__Enum_DEFINED)
#define IL2CPP_STRUCT_ComputeBufferType__Enum_DEFINED
enum class ComputeBufferType__Enum : int32_t {
    Default = 0x00000000,
    Raw = 0x00000001,
    Append = 0x00000002,
    Counter = 0x00000004,
    DrawIndirect = 0x00000100,
    IndirectArguments = 0x00000100,
    GPUMemory = 0x00000200,
};
#endif
#if !defined(IL2CPP_STRUCT_ComputeBufferType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ComputeBufferType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ComputeBufferType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComputeBufferType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ComputeBufferType__Enum_FWDDECL)
#include <Modloader/app/structs/ComputeBufferType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComputeBufferType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
