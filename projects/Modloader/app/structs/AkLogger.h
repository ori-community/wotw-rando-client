#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkLogger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkLogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkLogger_DEFINED)
#include <Modloader/app/structs/AkLogger__Fields.h>
#if defined(IL2CPP_STRUCT_AkLogger__Fields_DEFINED)
#define IL2CPP_STRUCT_AkLogger_DEFINED
struct AkLogger__Class;
struct AkLogger {
    struct AkLogger__Class* klass;
    MonitorData* monitor;
    struct AkLogger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkLogger_FWDDECL)
#define IL2CPP_STRUCT_AkLogger_FWDDECL
#include <Modloader/app/structs/AkLogger__Class.h>
#endif
#undef IL2CPP_STRUCT_AkLogger_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkLogger_DEFINED) && !defined(IL2CPP_STRUCT_AkLogger_FWDDECL)
#include <Modloader/app/structs/AkLogger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkLogger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
