#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestartReason__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestartReason__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestartReason__Enum_DEFINED)
#define IL2CPP_STRUCT_RestartReason__Enum_DEFINED
enum class RestartReason__Enum : int32_t {
    NotSpecified = 0x00000000,
    Quit = 0x00000001,
    ProfileSwitch = 0x00000002,
    Error = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_RestartReason__Enum_FWDDECL)
#define IL2CPP_STRUCT_RestartReason__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RestartReason__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestartReason__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RestartReason__Enum_FWDDECL)
#include <Modloader/app/structs/RestartReason__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestartReason__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
