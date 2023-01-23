#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomAttributeData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomAttributeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeData_DEFINED)
#include <Modloader/app/structs/CustomAttributeData__Fields.h>
#if defined(IL2CPP_STRUCT_CustomAttributeData__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomAttributeData_DEFINED
struct CustomAttributeData__Class;
struct CustomAttributeData {
    struct CustomAttributeData__Class* klass;
    MonitorData* monitor;
    struct CustomAttributeData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomAttributeData_FWDDECL)
#define IL2CPP_STRUCT_CustomAttributeData_FWDDECL
#include <Modloader/app/structs/CustomAttributeData__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomAttributeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeData_DEFINED) && !defined(IL2CPP_STRUCT_CustomAttributeData_FWDDECL)
#include <Modloader/app/structs/CustomAttributeData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomAttributeData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
