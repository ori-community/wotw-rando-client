#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_YogaNode__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_YogaNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_YogaNode__Fields_DEFINED)
#define IL2CPP_STRUCT_YogaNode__Fields_DEFINED
struct List_1_UnityEngine_Yoga_YogaNode_;
struct MeasureFunction;
struct BaselineFunction;
struct __declspec(align(8)) YogaNode__Fields {
    void* _ygNode;
    struct List_1_UnityEngine_Yoga_YogaNode_* _children;
    struct MeasureFunction* _measureFunction;
    struct BaselineFunction* _baselineFunction;
};
#endif
#if !defined(IL2CPP_STRUCT_YogaNode__Fields_FWDDECL)
#define IL2CPP_STRUCT_YogaNode__Fields_FWDDECL
#include <Modloader/app/structs/BaselineFunction.h>
#include <Modloader/app/structs/List_1_UnityEngine_Yoga_YogaNode_.h>
#include <Modloader/app/structs/MeasureFunction.h>
#endif
#undef IL2CPP_STRUCT_YogaNode__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_YogaNode__Fields_DEFINED) && !defined(IL2CPP_STRUCT_YogaNode__Fields_FWDDECL)
#include <Modloader/app/structs/YogaNode__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/YogaNode__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
