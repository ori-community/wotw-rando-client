#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogCallbackData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogCallbackData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackData__Fields_DEFINED)
#include <Modloader/app/structs/LogType__Enum.h>
#if defined(IL2CPP_STRUCT_LogType__Enum_DEFINED)
#define IL2CPP_STRUCT_LogCallbackData__Fields_DEFINED
struct String;
struct __declspec(align(8)) LogCallbackData__Fields {
    struct String* LogString;
    struct String* StackTrace;
    LogType__Enum LogType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogCallbackData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LogCallbackData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LogCallbackData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LogCallbackData__Fields_FWDDECL)
#include <Modloader/app/structs/LogCallbackData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogCallbackData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
