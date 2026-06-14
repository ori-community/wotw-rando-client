#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SinkProviderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SinkProviderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinkProviderData_DEFINED)
#include <Modloader/app/structs/SinkProviderData__Fields.h>
#if defined(IL2CPP_STRUCT_SinkProviderData__Fields_DEFINED)
#define IL2CPP_STRUCT_SinkProviderData_DEFINED
struct SinkProviderData__Class;
struct SinkProviderData {
    struct SinkProviderData__Class* klass;
    MonitorData* monitor;
    struct SinkProviderData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SinkProviderData_FWDDECL)
#define IL2CPP_STRUCT_SinkProviderData_FWDDECL
#include <Modloader/app/structs/SinkProviderData__Class.h>
#endif
#undef IL2CPP_STRUCT_SinkProviderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinkProviderData_DEFINED) && !defined(IL2CPP_STRUCT_SinkProviderData_FWDDECL)
#include <Modloader/app/structs/SinkProviderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SinkProviderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
