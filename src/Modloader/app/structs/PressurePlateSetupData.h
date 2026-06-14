#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PressurePlateSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PressurePlateSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlateSetupData_DEFINED)
#include <Modloader/app/structs/PressurePlateSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_PressurePlateSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_PressurePlateSetupData_DEFINED
struct PressurePlateSetupData__Class;
struct PressurePlateSetupData {
    struct PressurePlateSetupData__Class* klass;
    MonitorData* monitor;
    struct PressurePlateSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PressurePlateSetupData_FWDDECL)
#define IL2CPP_STRUCT_PressurePlateSetupData_FWDDECL
#include <Modloader/app/structs/PressurePlateSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_PressurePlateSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PressurePlateSetupData_DEFINED) && !defined(IL2CPP_STRUCT_PressurePlateSetupData_FWDDECL)
#include <Modloader/app/structs/PressurePlateSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PressurePlateSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
