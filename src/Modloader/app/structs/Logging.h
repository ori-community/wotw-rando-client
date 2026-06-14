#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Logging_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Logging_INITIALIZING
#if !defined(IL2CPP_STRUCT_Logging_DEFINED)
#define IL2CPP_STRUCT_Logging_DEFINED
struct Logging__Class;
struct Logging {
    struct Logging__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Logging_FWDDECL)
#define IL2CPP_STRUCT_Logging_FWDDECL
#include <Modloader/app/structs/Logging__Class.h>
#endif
#undef IL2CPP_STRUCT_Logging_INITIALIZING
#if !defined(IL2CPP_STRUCT_Logging_DEFINED) && !defined(IL2CPP_STRUCT_Logging_FWDDECL)
#include <Modloader/app/structs/Logging.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Logging.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
