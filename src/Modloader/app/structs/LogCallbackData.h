#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogCallbackData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogCallbackData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackData_DEFINED)
#include <Modloader/app/structs/LogCallbackData__Fields.h>
#if defined(IL2CPP_STRUCT_LogCallbackData__Fields_DEFINED)
#define IL2CPP_STRUCT_LogCallbackData_DEFINED
struct LogCallbackData__Class;
struct LogCallbackData {
    struct LogCallbackData__Class* klass;
    MonitorData* monitor;
    struct LogCallbackData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogCallbackData_FWDDECL)
#define IL2CPP_STRUCT_LogCallbackData_FWDDECL
#include <Modloader/app/structs/LogCallbackData__Class.h>
#endif
#undef IL2CPP_STRUCT_LogCallbackData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogCallbackData_DEFINED) && !defined(IL2CPP_STRUCT_LogCallbackData_FWDDECL)
#include <Modloader/app/structs/LogCallbackData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogCallbackData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
