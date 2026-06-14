#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILogHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILogHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILogHandler_DEFINED)
#define IL2CPP_STRUCT_ILogHandler_DEFINED
struct ILogHandler__Class;
struct ILogHandler {
    struct ILogHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ILogHandler_FWDDECL)
#define IL2CPP_STRUCT_ILogHandler_FWDDECL
#include <Modloader/app/structs/ILogHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ILogHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILogHandler_DEFINED) && !defined(IL2CPP_STRUCT_ILogHandler_FWDDECL)
#include <Modloader/app/structs/ILogHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILogHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
