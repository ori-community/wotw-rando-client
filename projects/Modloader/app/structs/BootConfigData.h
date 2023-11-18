#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BootConfigData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BootConfigData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BootConfigData_DEFINED)
#include <Modloader/app/structs/BootConfigData__Fields.h>
#if defined(IL2CPP_STRUCT_BootConfigData__Fields_DEFINED)
#define IL2CPP_STRUCT_BootConfigData_DEFINED
struct BootConfigData__Class;
struct BootConfigData {
    struct BootConfigData__Class* klass;
    MonitorData* monitor;
    struct BootConfigData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BootConfigData_FWDDECL)
#define IL2CPP_STRUCT_BootConfigData_FWDDECL
#include <Modloader/app/structs/BootConfigData__Class.h>
#endif
#undef IL2CPP_STRUCT_BootConfigData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BootConfigData_DEFINED) && !defined(IL2CPP_STRUCT_BootConfigData_FWDDECL)
#include <Modloader/app/structs/BootConfigData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BootConfigData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
