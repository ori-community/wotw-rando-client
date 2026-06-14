#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugLogger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugLogger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogger__Fields_DEFINED)
#include <Modloader/app/structs/LogLevel__Enum_1.h>
#if defined(IL2CPP_STRUCT_LogLevel__Enum_1_DEFINED)
#define IL2CPP_STRUCT_DebugLogger__Fields_DEFINED
struct __declspec(align(8)) DebugLogger__Fields {
    LogLevel__Enum_1 minLogLevel;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugLogger__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugLogger__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DebugLogger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugLogger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugLogger__Fields_FWDDECL)
#include <Modloader/app/structs/DebugLogger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugLogger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
