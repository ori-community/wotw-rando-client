#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_DEFINED)
#define IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_DEFINED
enum class EventProvider_WriteEventErrorCode__Enum : int32_t {
    NoError = 0x00000000,
    NoFreeBuffers = 0x00000001,
    EventTooBig = 0x00000002,
    NullInput = 0x00000003,
    TooManyArgs = 0x00000004,
    Other = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventProvider_WriteEventErrorCode__Enum_FWDDECL)
#include <Modloader/app/structs/EventProvider_WriteEventErrorCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventProvider_WriteEventErrorCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
