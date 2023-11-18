#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PipeDirection__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PipeDirection__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PipeDirection__Enum_DEFINED)
#define IL2CPP_STRUCT_PipeDirection__Enum_DEFINED
enum class PipeDirection__Enum : int32_t {
    In = 0x00000001,
    Out = 0x00000002,
    InOut = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_PipeDirection__Enum_FWDDECL)
#define IL2CPP_STRUCT_PipeDirection__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PipeDirection__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PipeDirection__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PipeDirection__Enum_FWDDECL)
#include <Modloader/app/structs/PipeDirection__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PipeDirection__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
