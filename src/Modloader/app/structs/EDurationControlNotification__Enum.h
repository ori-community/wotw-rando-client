#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EDurationControlNotification__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EDurationControlNotification__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EDurationControlNotification__Enum_DEFINED)
#define IL2CPP_STRUCT_EDurationControlNotification__Enum_DEFINED
enum class EDurationControlNotification__Enum : int32_t {
    k_EDurationControlNotification_None = 0x00000000,
    k_EDurationControlNotification_1Hour = 0x00000001,
    k_EDurationControlNotification_3Hours = 0x00000002,
    k_EDurationControlNotification_HalfProgress = 0x00000003,
    k_EDurationControlNotification_NoProgress = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_EDurationControlNotification__Enum_FWDDECL)
#define IL2CPP_STRUCT_EDurationControlNotification__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EDurationControlNotification__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EDurationControlNotification__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EDurationControlNotification__Enum_FWDDECL)
#include <Modloader/app/structs/EDurationControlNotification__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EDurationControlNotification__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
