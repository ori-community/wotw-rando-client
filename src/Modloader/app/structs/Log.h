#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Log_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Log_INITIALIZING
#if !defined(IL2CPP_STRUCT_Log_DEFINED)
#include <Modloader/app/structs/Log__Fields.h>
#if defined(IL2CPP_STRUCT_Log__Fields_DEFINED)
#define IL2CPP_STRUCT_Log_DEFINED
struct Log__Class;
struct Log {
    struct Log__Class* klass;
    MonitorData* monitor;
    struct Log__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Log_FWDDECL)
#define IL2CPP_STRUCT_Log_FWDDECL
#include <Modloader/app/structs/Log__Class.h>
#endif
#undef IL2CPP_STRUCT_Log_INITIALIZING
#if !defined(IL2CPP_STRUCT_Log_DEFINED) && !defined(IL2CPP_STRUCT_Log_FWDDECL)
#include <Modloader/app/structs/Log.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Log.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
