#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneOptimizationResults__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneOptimizationResults__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneOptimizationResults__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneOptimizationResults__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_Int32_;
struct __declspec(align(8)) SceneOptimizationResults__Fields {
    struct String* _SceneName_k__BackingField;
    int32_t ObjectsAmount;
    int32_t StrippedObjectsAmount;
    int32_t IgnoredObjectsAmount;
    int32_t ModifiersAmount;
    int32_t StrippedModifiersAmount;
    int32_t IgnoredModifiersAmount;
    struct Dictionary_2_System_String_System_Int32_* m_strippedModifiers;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneOptimizationResults__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneOptimizationResults__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneOptimizationResults__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneOptimizationResults__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneOptimizationResults__Fields_FWDDECL)
#include <Modloader/app/structs/SceneOptimizationResults__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneOptimizationResults__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
