#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPuppet__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericPuppet__Fields_DEFINED
struct IPuppetBase;
struct GhostGenericEventsPlugin;
struct GenericPuppet_GhostGenericResourcesReflectionCache;
struct List_1_Moon_ActiveAnimationHandle_;
struct Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_;
struct Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_;
struct List_1_Moon_Timeline_MoonTimeline_;
struct FieldInfo_1__Array;
struct ISoundHost;
struct Dictionary_2_System_Reflection_FieldInfo_System_Object_;
struct Dictionary_2_System_Int32_System_Reflection_FieldInfo_;
struct GenericPuppet__Fields {
    struct MonoBehaviour__Fields _;
    struct IPuppetBase* m_puppetMaster;
    bool m_isLive;
    struct GhostGenericEventsPlugin* m_ghostGenericEventsPlugin;
    struct GenericPuppet_GhostGenericResourcesReflectionCache* m_attributesCache;
    struct List_1_Moon_ActiveAnimationHandle_* m_activeAnimations;
    struct Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_* m_activeAnimationIndexMap;
    struct Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* m_activeAnimationsMap;
    struct List_1_Moon_Timeline_MoonTimeline_* m_activeTimelines;
    struct FieldInfo_1__Array* m_fields;
    struct ISoundHost* _SoundHost_k__BackingField;
    struct Dictionary_2_System_Reflection_FieldInfo_System_Object_* m_fieldInfoAttributeCache;
    struct Dictionary_2_System_Int32_System_Reflection_FieldInfo_* m_fieldInfoCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericPuppet__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_ActiveAnimationHandle_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/Dictionary_2_System_Reflection_FieldInfo_System_Object_.h>
#include <Modloader/app/structs/FieldInfo_1__Array.h>
#include <Modloader/app/structs/GenericPuppet_GhostGenericResourcesReflectionCache.h>
#include <Modloader/app/structs/GhostGenericEventsPlugin.h>
#include <Modloader/app/structs/IPuppetBase.h>
#include <Modloader/app/structs/ISoundHost.h>
#include <Modloader/app/structs/List_1_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#endif
#undef IL2CPP_STRUCT_GenericPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/GenericPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
