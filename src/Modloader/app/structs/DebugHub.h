#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugHub_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugHub_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHub_DEFINED)
#include <Modloader/app/structs/DebugHub__Fields.h>
#if defined(IL2CPP_STRUCT_DebugHub__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugHub_DEFINED
struct DebugHub__Class;
struct DebugHub {
    struct DebugHub__Class* klass;
    MonitorData* monitor;
    struct DebugHub__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugHub_FWDDECL)
#define IL2CPP_STRUCT_DebugHub_FWDDECL
#include <Modloader/app/structs/DebugHub__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugHub_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHub_DEFINED) && !defined(IL2CPP_STRUCT_DebugHub_FWDDECL)
#include <Modloader/app/structs/DebugHub.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugHub.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
