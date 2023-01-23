#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugInfoGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugInfoGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugInfoGenerator_DEFINED)
#define IL2CPP_STRUCT_DebugInfoGenerator_DEFINED
struct DebugInfoGenerator__Class;
struct DebugInfoGenerator {
    struct DebugInfoGenerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugInfoGenerator_FWDDECL)
#define IL2CPP_STRUCT_DebugInfoGenerator_FWDDECL
#include <Modloader/app/structs/DebugInfoGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugInfoGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugInfoGenerator_DEFINED) && !defined(IL2CPP_STRUCT_DebugInfoGenerator_FWDDECL)
#include <Modloader/app/structs/DebugInfoGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugInfoGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
