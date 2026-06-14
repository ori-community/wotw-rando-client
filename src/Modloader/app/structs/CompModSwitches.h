#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompModSwitches_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompModSwitches_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompModSwitches_DEFINED)
#define IL2CPP_STRUCT_CompModSwitches_DEFINED
struct CompModSwitches__Class;
struct CompModSwitches {
    struct CompModSwitches__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CompModSwitches_FWDDECL)
#define IL2CPP_STRUCT_CompModSwitches_FWDDECL
#include <Modloader/app/structs/CompModSwitches__Class.h>
#endif
#undef IL2CPP_STRUCT_CompModSwitches_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompModSwitches_DEFINED) && !defined(IL2CPP_STRUCT_CompModSwitches_FWDDECL)
#include <Modloader/app/structs/CompModSwitches.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompModSwitches.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
