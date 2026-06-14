#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_DEFINED)
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType.h>
#if defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_DEFINED)
#define IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_DEFINED
struct HashSet_1_LightPriority_Layer_;
struct HashSet_1_System_Int32_;
struct List_1_PointLightMaskModifier_;
struct __declspec(align(8)) LightCullingSystem_LightCullingGroup__Fields {
    struct HashSet_1_LightPriority_Layer_* Layers;
    struct LightCullingSystem_LightCullingConfigPerType m_config;
    struct HashSet_1_System_Int32_* m_lightsToCull;
    struct List_1_PointLightMaskModifier_* m_validLigths;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_LightPriority_Layer_.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_PointLightMaskModifier_.h>
#endif
#undef IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingGroup__Fields_FWDDECL)
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
