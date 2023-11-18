#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeverSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeverSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverSetupData_DEFINED)
#include <Modloader/app/structs/LeverSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_LeverSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_LeverSetupData_DEFINED
struct LeverSetupData__Class;
struct LeverSetupData {
    struct LeverSetupData__Class* klass;
    MonitorData* monitor;
    struct LeverSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeverSetupData_FWDDECL)
#define IL2CPP_STRUCT_LeverSetupData_FWDDECL
#include <Modloader/app/structs/LeverSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_LeverSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverSetupData_DEFINED) && !defined(IL2CPP_STRUCT_LeverSetupData_FWDDECL)
#include <Modloader/app/structs/LeverSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeverSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
