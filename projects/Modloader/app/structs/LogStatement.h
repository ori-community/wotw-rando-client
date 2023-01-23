#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogStatement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogStatement_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogStatement_DEFINED)
#include <Modloader/app/structs/LogStatement__Fields.h>
#if defined(IL2CPP_STRUCT_LogStatement__Fields_DEFINED)
#define IL2CPP_STRUCT_LogStatement_DEFINED
struct LogStatement__Class;
struct LogStatement {
    struct LogStatement__Class* klass;
    MonitorData* monitor;
    struct LogStatement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogStatement_FWDDECL)
#define IL2CPP_STRUCT_LogStatement_FWDDECL
#include <Modloader/app/structs/LogStatement__Class.h>
#endif
#undef IL2CPP_STRUCT_LogStatement_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogStatement_DEFINED) && !defined(IL2CPP_STRUCT_LogStatement_FWDDECL)
#include <Modloader/app/structs/LogStatement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogStatement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
