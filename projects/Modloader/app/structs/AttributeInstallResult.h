#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeInstallResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeInstallResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeInstallResult_DEFINED)
#include <Modloader/app/structs/AttributeInstallResult__Fields.h>
#if defined(IL2CPP_STRUCT_AttributeInstallResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AttributeInstallResult_DEFINED
struct AttributeInstallResult__Class;
struct AttributeInstallResult {
    struct AttributeInstallResult__Class* klass;
    MonitorData* monitor;
    struct AttributeInstallResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttributeInstallResult_FWDDECL)
#define IL2CPP_STRUCT_AttributeInstallResult_FWDDECL
#include <Modloader/app/structs/AttributeInstallResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AttributeInstallResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeInstallResult_DEFINED) && !defined(IL2CPP_STRUCT_AttributeInstallResult_FWDDECL)
#include <Modloader/app/structs/AttributeInstallResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeInstallResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
