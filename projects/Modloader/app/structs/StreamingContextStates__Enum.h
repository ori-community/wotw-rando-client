#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamingContextStates__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamingContextStates__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingContextStates__Enum_DEFINED)
#define IL2CPP_STRUCT_StreamingContextStates__Enum_DEFINED
enum class StreamingContextStates__Enum : int32_t {
    CrossProcess = 0x00000001,
    CrossMachine = 0x00000002,
    File = 0x00000004,
    Persistence = 0x00000008,
    Remoting = 0x00000010,
    Other = 0x00000020,
    Clone = 0x00000040,
    CrossAppDomain = 0x00000080,
    All = 0x000000ff,
};
#endif
#if !defined(IL2CPP_STRUCT_StreamingContextStates__Enum_FWDDECL)
#define IL2CPP_STRUCT_StreamingContextStates__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_StreamingContextStates__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingContextStates__Enum_DEFINED) && !defined(IL2CPP_STRUCT_StreamingContextStates__Enum_FWDDECL)
#include <Modloader/app/structs/StreamingContextStates__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamingContextStates__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
