#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeUtility_DEFINED)
#define IL2CPP_STRUCT_TimeUtility_DEFINED
struct TimeUtility__Class;
struct TimeUtility {
    struct TimeUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeUtility_FWDDECL)
#define IL2CPP_STRUCT_TimeUtility_FWDDECL
#include <Modloader/app/structs/TimeUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeUtility_DEFINED) && !defined(IL2CPP_STRUCT_TimeUtility_FWDDECL)
#include <Modloader/app/structs/TimeUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
