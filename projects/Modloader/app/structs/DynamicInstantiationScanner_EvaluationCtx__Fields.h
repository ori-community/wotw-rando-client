#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_DEFINED
struct MonoBehaviour;
struct List_1_DynamicInstantiationDescriptor_;
struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_;
struct Stack_1_System_Single_;
struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_;
struct __declspec(align(8)) DynamicInstantiationScanner_EvaluationCtx__Fields {
    struct MonoBehaviour* RootComponent;
    struct List_1_DynamicInstantiationDescriptor_* Descriptors;
    struct Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_* OnGameObjectFound;
    struct List_1_DynamicInstantiationDescriptor_* DescriptorsTemp;
    struct Stack_1_System_Single_* PrewarmPriorities;
    struct Dictionary_2_UnityEngine_ScriptableObject_System_Int32_* EvaluatedScriptableObjects;
    int32_t EvaluationDepth;
    int32_t EvaluationCount;
    bool CycleReferenceDetected;
    bool DepthExceeded;
    bool CountExceeded;
};
#endif
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_UnityEngine_GameObject_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_ScriptableObject_System_Int32_.h>
#include <Modloader/app/structs/List_1_DynamicInstantiationDescriptor_.h>
#include <Modloader/app/structs/MonoBehaviour.h>
#include <Modloader/app/structs/Stack_1_System_Single_.h>
#endif
#undef IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicInstantiationScanner_EvaluationCtx__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicInstantiationScanner_EvaluationCtx__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
