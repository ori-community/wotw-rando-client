#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProcessUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProcessUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessUtility_DEFINED)
#define IL2CPP_STRUCT_ProcessUtility_DEFINED
struct ProcessUtility__Class;
struct ProcessUtility {
    struct ProcessUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ProcessUtility_FWDDECL)
#define IL2CPP_STRUCT_ProcessUtility_FWDDECL
#include <Modloader/app/structs/ProcessUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_ProcessUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProcessUtility_DEFINED) && !defined(IL2CPP_STRUCT_ProcessUtility_FWDDECL)
#include <Modloader/app/structs/ProcessUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProcessUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
