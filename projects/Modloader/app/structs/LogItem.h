#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogItem_DEFINED)
#include <Modloader/app/structs/LogItem__Fields.h>
#if defined(IL2CPP_STRUCT_LogItem__Fields_DEFINED)
#define IL2CPP_STRUCT_LogItem_DEFINED
struct LogItem__Class;
struct LogItem {
    struct LogItem__Class* klass;
    MonitorData* monitor;
    struct LogItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogItem_FWDDECL)
#define IL2CPP_STRUCT_LogItem_FWDDECL
#include <Modloader/app/structs/LogItem__Class.h>
#endif
#undef IL2CPP_STRUCT_LogItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogItem_DEFINED) && !defined(IL2CPP_STRUCT_LogItem_FWDDECL)
#include <Modloader/app/structs/LogItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
