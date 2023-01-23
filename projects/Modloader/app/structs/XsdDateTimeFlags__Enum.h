#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdDateTimeFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdDateTimeFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDateTimeFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdDateTimeFlags__Enum_DEFINED
enum class XsdDateTimeFlags__Enum : int32_t {
    DateTime = 0x00000001,
    Time = 0x00000002,
    Date = 0x00000004,
    GYearMonth = 0x00000008,
    GYear = 0x00000010,
    GMonthDay = 0x00000020,
    GDay = 0x00000040,
    GMonth = 0x00000080,
    XdrDateTimeNoTz = 0x00000100,
    XdrDateTime = 0x00000200,
    XdrTimeNoTz = 0x00000400,
    AllXsd = 0x000000ff,
};
#endif
#if !defined(IL2CPP_STRUCT_XsdDateTimeFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_XsdDateTimeFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XsdDateTimeFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdDateTimeFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XsdDateTimeFlags__Enum_FWDDECL)
#include <Modloader/app/structs/XsdDateTimeFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdDateTimeFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
