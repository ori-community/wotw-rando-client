#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompModSwitches__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompModSwitches__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompModSwitches__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CompModSwitches__StaticFields_DEFINED
struct BooleanSwitch;
struct TraceSwitch;
struct CompModSwitches__StaticFields {
    struct BooleanSwitch* commonDesignerServices;
    struct TraceSwitch* eventLog;
};
#endif
#if !defined(IL2CPP_STRUCT_CompModSwitches__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CompModSwitches__StaticFields_FWDDECL
#include <Modloader/app/structs/BooleanSwitch.h>
#include <Modloader/app/structs/TraceSwitch.h>
#endif
#undef IL2CPP_STRUCT_CompModSwitches__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompModSwitches__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CompModSwitches__StaticFields_FWDDECL)
#include <Modloader/app/structs/CompModSwitches__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompModSwitches__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
