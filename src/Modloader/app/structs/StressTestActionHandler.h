#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTestActionHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTestActionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestActionHandler_DEFINED)
#include <Modloader/app/structs/StressTestActionHandler__Fields.h>
#if defined(IL2CPP_STRUCT_StressTestActionHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_StressTestActionHandler_DEFINED
struct StressTestActionHandler__Class;
struct StressTestActionHandler {
    struct StressTestActionHandler__Class* klass;
    MonitorData* monitor;
    struct StressTestActionHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTestActionHandler_FWDDECL)
#define IL2CPP_STRUCT_StressTestActionHandler_FWDDECL
#include <Modloader/app/structs/StressTestActionHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_StressTestActionHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestActionHandler_DEFINED) && !defined(IL2CPP_STRUCT_StressTestActionHandler_FWDDECL)
#include <Modloader/app/structs/StressTestActionHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTestActionHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
