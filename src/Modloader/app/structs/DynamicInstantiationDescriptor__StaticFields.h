#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_DEFINED
struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_;
struct List_1_DynamicInstantiationDescriptor_;
struct Type__Array;
struct DynamicInstantiationDescriptor_CountGetter;
struct DynamicInstantiationScanner;
struct DynamicInstantiationDescriptor__StaticFields {
    struct Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_* s_reflectionCache;
    struct List_1_DynamicInstantiationDescriptor_* s_descriptorCache;
    struct Type__Array* s_providerParameters;
    struct Type__Array* s_dynamicCountParametersForRegular;
    struct Type__Array* s_dynamicCountParametersForArray;
    struct DynamicInstantiationDescriptor_CountGetter* s_defaultCountGetter;
    struct DynamicInstantiationScanner* s_scanner;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_List_1_DynamicInstantiationDescriptor_ReflectionInfo_.h>
#include <Modloader/app/structs/DynamicInstantiationDescriptor_CountGetter.h>
#include <Modloader/app/structs/DynamicInstantiationScanner.h>
#include <Modloader/app/structs/List_1_DynamicInstantiationDescriptor_.h>
#include <Modloader/app/structs/Type__Array.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__StaticFields_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationDescriptor__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationDescriptor__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
