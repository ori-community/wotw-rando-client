#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Log__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Log__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Log__Fields_DEFINED)
#include <Modloader/app/structs/LogLevel__Enum.h>
#if defined(IL2CPP_STRUCT_LogLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_Log__Fields_DEFINED
struct List_1_TriangleNet_Logging_LogItem_;
struct __declspec(align(8)) Log__Fields {
    struct List_1_TriangleNet_Logging_LogItem_* log;
    LogLevel__Enum level;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Log__Fields_FWDDECL)
#define IL2CPP_STRUCT_Log__Fields_FWDDECL
#include <Modloader/app/structs/List_1_TriangleNet_Logging_LogItem_.h>
#endif
#undef IL2CPP_STRUCT_Log__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Log__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Log__Fields_FWDDECL)
#include <Modloader/app/structs/Log__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Log__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
