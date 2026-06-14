#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdDuration_Parts__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdDuration_Parts__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDuration_Parts__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdDuration_Parts__Enum_DEFINED
enum class XsdDuration_Parts__Enum : int32_t {
    HasNone = 0x00000000,
    HasYears = 0x00000001,
    HasMonths = 0x00000002,
    HasDays = 0x00000004,
    HasHours = 0x00000008,
    HasMinutes = 0x00000010,
    HasSeconds = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_XsdDuration_Parts__Enum_FWDDECL)
#define IL2CPP_STRUCT_XsdDuration_Parts__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XsdDuration_Parts__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDuration_Parts__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XsdDuration_Parts__Enum_FWDDECL)
#include <Modloader/app/structs/XsdDuration_Parts__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdDuration_Parts__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
