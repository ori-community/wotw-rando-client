#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlertLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlertLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlertLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_AlertLevel__Enum_DEFINED
enum class AlertLevel__Enum : uint8_t {
    Warning = 0x01,
    Fatal = 0x02,
};
#endif
#if !defined(IL2CPP_STRUCT_AlertLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_AlertLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AlertLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlertLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AlertLevel__Enum_FWDDECL)
#include <Modloader/app/structs/AlertLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlertLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
