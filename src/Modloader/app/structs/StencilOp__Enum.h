#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StencilOp__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StencilOp__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilOp__Enum_DEFINED)
#define IL2CPP_STRUCT_StencilOp__Enum_DEFINED
enum class StencilOp__Enum : int32_t {
    Keep = 0x00000000,
    Zero = 0x00000001,
    Replace = 0x00000002,
    IncrementSaturate = 0x00000003,
    DecrementSaturate = 0x00000004,
    Invert = 0x00000005,
    IncrementWrap = 0x00000006,
    DecrementWrap = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_StencilOp__Enum_FWDDECL)
#define IL2CPP_STRUCT_StencilOp__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_StencilOp__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StencilOp__Enum_DEFINED) && !defined(IL2CPP_STRUCT_StencilOp__Enum_FWDDECL)
#include <Modloader/app/structs/StencilOp__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StencilOp__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
