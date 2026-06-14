#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) DynamicInstantiationDescriptor__Fields {
    struct GameObject* Prefab;
    int32_t Count;
    struct Nullable_1_Single_ HighPriorityPrewarmRatio;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationDescriptor__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationDescriptor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
