#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompatibilitySwitches_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompatibilitySwitches_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompatibilitySwitches_DEFINED)
#define IL2CPP_STRUCT_CompatibilitySwitches_DEFINED
struct CompatibilitySwitches__Class;
struct CompatibilitySwitches {
    struct CompatibilitySwitches__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CompatibilitySwitches_FWDDECL)
#define IL2CPP_STRUCT_CompatibilitySwitches_FWDDECL
#include <Modloader/app/structs/CompatibilitySwitches__Class.h>
#endif
#undef IL2CPP_STRUCT_CompatibilitySwitches_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompatibilitySwitches_DEFINED) && !defined(IL2CPP_STRUCT_CompatibilitySwitches_FWDDECL)
#include <Modloader/app/structs/CompatibilitySwitches.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompatibilitySwitches.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
