#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorSetupData_DEFINED)
#include <Modloader/app/structs/DoorSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_DoorSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_DoorSetupData_DEFINED
struct DoorSetupData__Class;
struct DoorSetupData {
    struct DoorSetupData__Class* klass;
    MonitorData* monitor;
    struct DoorSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorSetupData_FWDDECL)
#define IL2CPP_STRUCT_DoorSetupData_FWDDECL
#include <Modloader/app/structs/DoorSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_DoorSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorSetupData_DEFINED) && !defined(IL2CPP_STRUCT_DoorSetupData_FWDDECL)
#include <Modloader/app/structs/DoorSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
