#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_DEFINED)
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData__Fields.h>
#if defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_DEFINED
struct CustomAttributeData_LazyCAttrData__Class;
struct CustomAttributeData_LazyCAttrData {
    struct CustomAttributeData_LazyCAttrData__Class* klass;
    MonitorData* monitor;
    struct CustomAttributeData_LazyCAttrData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_FWDDECL)
#define IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_FWDDECL
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_DEFINED) && !defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData_FWDDECL)
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
