#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakablePhysicalSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakablePhysicalSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetupData_DEFINED)
#include <Modloader/app/structs/BreakablePhysicalSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_BreakablePhysicalSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_BreakablePhysicalSetupData_DEFINED
struct BreakablePhysicalSetupData__Class;
struct BreakablePhysicalSetupData {
    struct BreakablePhysicalSetupData__Class* klass;
    MonitorData* monitor;
    struct BreakablePhysicalSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetupData_FWDDECL)
#define IL2CPP_STRUCT_BreakablePhysicalSetupData_FWDDECL
#include <Modloader/app/structs/BreakablePhysicalSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_BreakablePhysicalSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakablePhysicalSetupData_DEFINED) && !defined(IL2CPP_STRUCT_BreakablePhysicalSetupData_FWDDECL)
#include <Modloader/app/structs/BreakablePhysicalSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakablePhysicalSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
