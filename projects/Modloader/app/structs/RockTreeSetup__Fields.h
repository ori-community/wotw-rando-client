#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockTreeSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockTreeSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockTreeSetup__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RockTreeSetup__Fields_DEFINED
struct IPushable;
struct Animation;
struct Transform;
struct ActionMethod;
struct RockTreeSetup__Fields {
    struct SaveSerialize__Fields _;
    struct IPushable* PushPullBlock;
    struct Animation* Animation;
    struct Transform* RockHelper;
    struct Vector3 m_rockHelperOffset;
    float m_time;
    float TriggerSequenceTime;
    bool m_hasTriggered;
    struct ActionMethod* Action;
    float ReleaseRockTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockTreeSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_RockTreeSetup__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Animation.h>
#include <Modloader/app/structs/IPushable.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RockTreeSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockTreeSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RockTreeSetup__Fields_FWDDECL)
#include <Modloader/app/structs/RockTreeSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockTreeSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
