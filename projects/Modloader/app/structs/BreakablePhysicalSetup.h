#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakablePhysicalSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakablePhysicalSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetup_DEFINED)
#include <Modloader/app/structs/BreakablePhysicalSetup__Fields.h>
#if defined(IL2CPP_STRUCT_BreakablePhysicalSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_BreakablePhysicalSetup_DEFINED
struct BreakablePhysicalSetup__Class;
struct BreakablePhysicalSetup {
    struct BreakablePhysicalSetup__Class* klass;
    MonitorData* monitor;
    struct BreakablePhysicalSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetup_FWDDECL)
#define IL2CPP_STRUCT_BreakablePhysicalSetup_FWDDECL
#include <Modloader/app/structs/BreakablePhysicalSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_BreakablePhysicalSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetup_DEFINED) && !defined(IL2CPP_STRUCT_BreakablePhysicalSetup_FWDDECL)
#include <Modloader/app/structs/BreakablePhysicalSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakablePhysicalSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
