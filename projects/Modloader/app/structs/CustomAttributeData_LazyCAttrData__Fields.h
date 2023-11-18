#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_DEFINED
struct Assembly;
struct __declspec(align(8)) CustomAttributeData_LazyCAttrData__Fields {
    struct Assembly* assembly;
    void* data;
    uint32_t data_length;
};
#endif
#if !defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_FWDDECL
#include <Modloader/app/structs/Assembly.h>
#endif
#undef IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CustomAttributeData_LazyCAttrData__Fields_FWDDECL)
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
