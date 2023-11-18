#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_DEFINED
struct FieldInfo_1;
struct MethodInfo_1;
struct DynamicInstantiationDescriptor_CountGetter;
struct DynamicInstantiationDescriptor_ReflectionInfo {
    struct FieldInfo_1* Field;
    struct MethodInfo_1* DynamicProvider;
    struct DynamicInstantiationDescriptor_CountGetter* CountGetter;
    bool IsMoonReference;
    bool IsArrayOrList;
    bool Nullable;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_FWDDECL
#include <Modloader/app/structs/DynamicInstantiationDescriptor_CountGetter.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor_ReflectionInfo_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationDescriptor_ReflectionInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
