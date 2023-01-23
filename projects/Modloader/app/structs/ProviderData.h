#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProviderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProviderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProviderData_DEFINED)
#include <Modloader/app/structs/ProviderData__Fields.h>
#if defined(IL2CPP_STRUCT_ProviderData__Fields_DEFINED)
#define IL2CPP_STRUCT_ProviderData_DEFINED
struct ProviderData__Class;
struct ProviderData {
    struct ProviderData__Class* klass;
    MonitorData* monitor;
    struct ProviderData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProviderData_FWDDECL)
#define IL2CPP_STRUCT_ProviderData_FWDDECL
#include <Modloader/app/structs/ProviderData__Class.h>
#endif
#undef IL2CPP_STRUCT_ProviderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProviderData_DEFINED) && !defined(IL2CPP_STRUCT_ProviderData_FWDDECL)
#include <Modloader/app/structs/ProviderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProviderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
