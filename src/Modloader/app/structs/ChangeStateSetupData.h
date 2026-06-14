#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeStateSetupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeStateSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateSetupData_DEFINED)
#include <Modloader/app/structs/ChangeStateSetupData__Fields.h>
#if defined(IL2CPP_STRUCT_ChangeStateSetupData__Fields_DEFINED)
#define IL2CPP_STRUCT_ChangeStateSetupData_DEFINED
struct ChangeStateSetupData__Class;
struct ChangeStateSetupData {
    struct ChangeStateSetupData__Class* klass;
    MonitorData* monitor;
    struct ChangeStateSetupData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeStateSetupData_FWDDECL)
#define IL2CPP_STRUCT_ChangeStateSetupData_FWDDECL
#include <Modloader/app/structs/ChangeStateSetupData__Class.h>
#endif
#undef IL2CPP_STRUCT_ChangeStateSetupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeStateSetupData_DEFINED) && !defined(IL2CPP_STRUCT_ChangeStateSetupData_FWDDECL)
#include <Modloader/app/structs/ChangeStateSetupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeStateSetupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
