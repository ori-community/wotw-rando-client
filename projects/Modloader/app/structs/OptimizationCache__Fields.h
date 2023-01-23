#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OptimizationCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OptimizationCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptimizationCache__Fields_DEFINED)
#define IL2CPP_STRUCT_OptimizationCache__Fields_DEFINED
struct ReadOnlyCollection_1_UberShaderComponent_;
struct List_1_UberShaderComponent_;
struct List_1_UnityEngine_ParticleSystem_;
struct List_1_UberWaterControl_;
struct List_1_Moon_Utilities_ObjectDisabler_;
struct List_1_NewSetupStateController_;
struct __declspec(align(8)) OptimizationCache__Fields {
    struct ReadOnlyCollection_1_UberShaderComponent_* UberShaders;
    struct List_1_UberShaderComponent_* m_uberShaderComponents;
    struct List_1_UnityEngine_ParticleSystem_* m_particleSystems;
    struct List_1_UberWaterControl_* m_waterControls;
    struct List_1_Moon_Utilities_ObjectDisabler_* m_objectDisablers;
    struct List_1_NewSetupStateController_* m_breakableSetups;
};
#endif
#if !defined(IL2CPP_STRUCT_OptimizationCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_OptimizationCache__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Utilities_ObjectDisabler_.h>
#include <Modloader/app/structs/List_1_NewSetupStateController_.h>
#include <Modloader/app/structs/List_1_UberShaderComponent_.h>
#include <Modloader/app/structs/List_1_UberWaterControl_.h>
#include <Modloader/app/structs/List_1_UnityEngine_ParticleSystem_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_UberShaderComponent_.h>
#endif
#undef IL2CPP_STRUCT_OptimizationCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OptimizationCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OptimizationCache__Fields_FWDDECL)
#include <Modloader/app/structs/OptimizationCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OptimizationCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
