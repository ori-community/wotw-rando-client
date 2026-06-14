#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHelper_DEFINED)
#define IL2CPP_STRUCT_DebugHelper_DEFINED
struct DebugHelper__Class;
struct DebugHelper {
    struct DebugHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugHelper_FWDDECL)
#define IL2CPP_STRUCT_DebugHelper_FWDDECL
#include <Modloader/app/structs/DebugHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHelper_DEFINED) && !defined(IL2CPP_STRUCT_DebugHelper_FWDDECL)
#include <Modloader/app/structs/DebugHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
