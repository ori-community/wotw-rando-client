#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmitEventResult__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmitEventResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmitEventResult__Enum_DEFINED)
#define IL2CPP_STRUCT_EmitEventResult__Enum_DEFINED
enum class EmitEventResult__Enum : int32_t {
    Success = 0x00000000,
    Overflow = 0x00000001,
    Disabled = 0x00000002,
    NotSupported = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_EmitEventResult__Enum_FWDDECL)
#define IL2CPP_STRUCT_EmitEventResult__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EmitEventResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmitEventResult__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EmitEventResult__Enum_FWDDECL)
#include <Modloader/app/structs/EmitEventResult__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmitEventResult__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
