#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoleSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoleSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoleSetupData_DEFINED)
#include <Modloader/app/structs/PoleSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_PoleSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_PoleSetupData_DEFINED
struct PoleSetupData__Class;
struct PoleSetupData {
    struct PoleSetupData__Class* klass;
    MonitorData* monitor;
    struct PoleSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoleSetupData_FWDDECL)
#define IL2CPP_STRUCT_PoleSetupData_FWDDECL
#include <Modloader/app/structs/PoleSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_PoleSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoleSetupData_DEFINED) && !defined(IL2CPP_STRUCT_PoleSetupData_FWDDECL)
#include <Modloader/app/structs/PoleSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoleSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
