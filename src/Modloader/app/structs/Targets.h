#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Targets_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Targets_INITIALIZING
#if !defined(IL2CPP_STRUCT_Targets_DEFINED)
#define IL2CPP_STRUCT_Targets_DEFINED
struct Targets__Class;
struct Targets {
    struct Targets__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Targets_FWDDECL)
#define IL2CPP_STRUCT_Targets_FWDDECL
#include <Modloader/app/structs/Targets__Class.h>
#endif
#undef IL2CPP_STRUCT_Targets_INITIALIZING
#if !defined(IL2CPP_STRUCT_Targets_DEFINED) && !defined(IL2CPP_STRUCT_Targets_FWDDECL)
#include <Modloader/app/structs/Targets.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Targets.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
