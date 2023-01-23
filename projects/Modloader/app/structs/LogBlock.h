#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LogBlock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LogBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogBlock_DEFINED)
#include <Modloader/app/structs/LogBlock__Fields.h>
#if defined(IL2CPP_STRUCT_LogBlock__Fields_DEFINED)
#define IL2CPP_STRUCT_LogBlock_DEFINED
struct LogBlock__Class;
struct LogBlock {
    struct LogBlock__Class* klass;
    MonitorData* monitor;
    struct LogBlock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LogBlock_FWDDECL)
#define IL2CPP_STRUCT_LogBlock_FWDDECL
#include <Modloader/app/structs/LogBlock__Class.h>
#endif
#undef IL2CPP_STRUCT_LogBlock_INITIALIZING
#if !defined(IL2CPP_STRUCT_LogBlock_DEFINED) && !defined(IL2CPP_STRUCT_LogBlock_FWDDECL)
#include <Modloader/app/structs/LogBlock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LogBlock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
