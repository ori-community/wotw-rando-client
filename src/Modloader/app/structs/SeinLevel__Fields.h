#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLevel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLevel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLevel__Fields_DEFINED)
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLevel__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct SeinCharacter;
struct SeinLevel__Fields {
    struct GuidOwner__Fields _;
    int32_t SkillPoints;
    int32_t Current;
    float ExperienceVisualMin;
    float ExperienceVisualMax;
    struct AnimationCurve* ExperienceRequiredPerLevel;
    struct GameObject* OnLevelUpGameObject;
    float ExperienceGainPerSecond;
    struct SeinCharacter* m_sein;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLevel__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLevel__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_SeinLevel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLevel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLevel__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLevel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLevel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
