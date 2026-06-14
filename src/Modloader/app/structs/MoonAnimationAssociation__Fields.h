#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimationAssociation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimationAssociation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimationAssociation__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimationAssociation__Fields_DEFINED
struct List_1_MoonAnimationAssociation_AnimationAssociationEntry_;
struct Action_4_Moon_MoonAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_;
struct Action_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_;
struct Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_;
struct MoonAnimator;
struct __declspec(align(8)) MoonAnimationAssociation__Fields {
    struct List_1_MoonAnimationAssociation_AnimationAssociationEntry_* Entries;
    struct Action_4_Moon_MoonAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_* m_associatedAnimationReturned;
    struct Action_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_* m_associatedAnimationStopped;
    struct Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_* m_entriesDictionary;
    struct MoonAnimator* m_sourceAnimator;
    struct MoonAnimator* m_matchingAnimator;
    bool _IsInitialized_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimationAssociation__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimationAssociation__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_Moon_MoonAnimation_Moon_ActiveAnimationHandle_.h>
#include <Modloader/app/structs/Action_4_Moon_MoonAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_.h>
#include <Modloader/app/structs/List_1_MoonAnimationAssociation_AnimationAssociationEntry_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimationAssociation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimationAssociation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimationAssociation__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimationAssociation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimationAssociation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
