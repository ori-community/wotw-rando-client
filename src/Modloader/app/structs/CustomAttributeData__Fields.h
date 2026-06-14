#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomAttributeData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomAttributeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeData__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomAttributeData__Fields_DEFINED
struct ConstructorInfo;
struct IList_1_System_Reflection_CustomAttributeTypedArgument_;
struct IList_1_System_Reflection_CustomAttributeNamedArgument_;
struct CustomAttributeData_LazyCAttrData;
struct __declspec(align(8)) CustomAttributeData__Fields {
    struct ConstructorInfo* ctorInfo;
    struct IList_1_System_Reflection_CustomAttributeTypedArgument_* ctorArgs;
    struct IList_1_System_Reflection_CustomAttributeNamedArgument_* namedArgs;
    struct CustomAttributeData_LazyCAttrData* lazyData;
};
#endif
#if !defined(IL2CPP_STRUCT_CustomAttributeData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CustomAttributeData__Fields_FWDDECL
#include <Modloader/app/structs/ConstructorInfo.h>
#include <Modloader/app/structs/CustomAttributeData_LazyCAttrData.h>
#include <Modloader/app/structs/IList_1_System_Reflection_CustomAttributeNamedArgument_.h>
#include <Modloader/app/structs/IList_1_System_Reflection_CustomAttributeTypedArgument_.h>
#endif
#undef IL2CPP_STRUCT_CustomAttributeData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomAttributeData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CustomAttributeData__Fields_FWDDECL)
#include <Modloader/app/structs/CustomAttributeData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomAttributeData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
