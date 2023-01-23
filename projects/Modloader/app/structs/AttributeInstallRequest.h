#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeInstallRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeInstallRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeInstallRequest_DEFINED)
#include <Modloader/app/structs/AttributeInstallRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AttributeInstallRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributeInstallRequest_DEFINED
struct AttributeInstallRequest__Class;
struct AttributeInstallRequest {
    struct AttributeInstallRequest__Class* klass;
    MonitorData* monitor;
    struct AttributeInstallRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttributeInstallRequest_FWDDECL)
#define IL2CPP_STRUCT_AttributeInstallRequest_FWDDECL
#include <Modloader/app/structs/AttributeInstallRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AttributeInstallRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeInstallRequest_DEFINED) && !defined(IL2CPP_STRUCT_AttributeInstallRequest_FWDDECL)
#include <Modloader/app/structs/AttributeInstallRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeInstallRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
