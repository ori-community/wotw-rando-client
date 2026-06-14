#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationTester__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_AnimationTester__Fields_DEFINED
struct List_1_AnimationTester_AnimationTestEntry_;
struct AnimationTester_Group;
struct AnimationTester_IHierarchyUiElement;
struct AnimationTester_IIntUiElement;
struct AnimationTester__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_AnimationTester_AnimationTestEntry_* Entries;
    struct AnimationTester_Group* RootGroup;
    int32_t ChangesPerSec;
    int32_t m_amountOfLayers;
    float m_timer;
    struct AnimationTester_IHierarchyUiElement* m_uiRoot;
    struct AnimationTester_IIntUiElement* m_changesPerSecElement;
    struct AnimationTester_IIntUiElement* m_layersElement;
    struct Vector2 m_scroll;
    bool m_show;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationTester__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationTester__Fields_FWDDECL
#include <Modloader/app/structs/AnimationTester_Group.h>
#include <Modloader/app/structs/AnimationTester_IHierarchyUiElement.h>
#include <Modloader/app/structs/AnimationTester_IIntUiElement.h>
#include <Modloader/app/structs/List_1_AnimationTester_AnimationTestEntry_.h>
#endif
#undef IL2CPP_STRUCT_AnimationTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationTester__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationTester__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationTester__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationTester__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
