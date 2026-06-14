#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugInfo_DEFINED)
#include <Modloader/app/structs/DebugInfo__Fields.h>
#if defined(IL2CPP_STRUCT_DebugInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugInfo_DEFINED
struct DebugInfo__Class;
struct DebugInfo {
    struct DebugInfo__Class* klass;
    MonitorData* monitor;
    struct DebugInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugInfo_FWDDECL)
#define IL2CPP_STRUCT_DebugInfo_FWDDECL
#include <Modloader/app/structs/DebugInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugInfo_DEFINED) && !defined(IL2CPP_STRUCT_DebugInfo_FWDDECL)
#include <Modloader/app/structs/DebugInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
