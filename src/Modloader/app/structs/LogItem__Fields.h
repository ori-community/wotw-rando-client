#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogItem__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/LogLevel__Enum.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_LogLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_LogItem__Fields_DEFINED
struct String;
struct __declspec(align(8)) LogItem__Fields {
    struct DateTime time;
    LogLevel__Enum level;

    struct String* message;
    struct String* info;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_LogItem__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LogItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LogItem__Fields_FWDDECL)
#include <Modloader/app/structs/LogItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
