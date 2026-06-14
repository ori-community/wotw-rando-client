#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_DEFINED
enum class AkMonitorErrorLevel__Enum : int32_t {
    ErrorLevel_Message = 0x00000001,
    ErrorLevel_Error = 0x00000002,
    ErrorLevel_All = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkMonitorErrorLevel__Enum_FWDDECL)
#include <Modloader/app/structs/AkMonitorErrorLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMonitorErrorLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
