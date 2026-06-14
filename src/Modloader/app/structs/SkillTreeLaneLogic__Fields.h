#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SkillTreeLaneLogic_SkillTreeType__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_SkillTreeLaneLogic_SkillTreeType__Enum_DEFINED)
#define IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_DEFINED
struct BaseAnimator;
struct List_1_SkillItem_;
struct SkillTreeLaneLogic__Fields {
    struct SaveSerialize__Fields _;
    struct BaseAnimator* SkillEarntAnimator;
    struct List_1_SkillItem_* Skills;
    float m_index;
    struct Color LargeIconColor;
    SkillTreeLaneLogic_SkillTreeType__Enum Type;

    bool m_laneAchievedAwarded;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/List_1_SkillItem_.h>
#endif
#undef IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkillTreeLaneLogic__Fields_FWDDECL)
#include <Modloader/app/structs/SkillTreeLaneLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillTreeLaneLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
