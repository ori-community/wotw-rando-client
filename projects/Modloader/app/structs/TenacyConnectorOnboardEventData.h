#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TenacyConnectorOnboardEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TenacyConnectorOnboardEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TenacyConnectorOnboardEventData_DEFINED)
#include <Modloader/app/structs/TenacyConnectorOnboardEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TenacyConnectorOnboardEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TenacyConnectorOnboardEventData_DEFINED
struct TenacyConnectorOnboardEventData__Class;
struct TenacyConnectorOnboardEventData {
    struct TenacyConnectorOnboardEventData__Class* klass;
    MonitorData* monitor;
    struct TenacyConnectorOnboardEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TenacyConnectorOnboardEventData_FWDDECL)
#define IL2CPP_STRUCT_TenacyConnectorOnboardEventData_FWDDECL
#include <Modloader/app/structs/TenacyConnectorOnboardEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TenacyConnectorOnboardEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TenacyConnectorOnboardEventData_DEFINED) && !defined(IL2CPP_STRUCT_TenacyConnectorOnboardEventData_FWDDECL)
#include <Modloader/app/structs/TenacyConnectorOnboardEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TenacyConnectorOnboardEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
