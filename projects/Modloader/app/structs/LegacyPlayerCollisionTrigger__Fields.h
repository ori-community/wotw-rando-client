#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_DEFINED)
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_DEFINED
struct ActionSequence;
struct LegacyPlayerCollisionTrigger__Fields {
    struct LegacyTrigger__Fields _;
    bool UseTrigger;
    struct Rect m_bounds;
    bool m_hasCollided;
    struct Vector3 m_position;
    struct ActionSequence* m_stressTestAction;
    bool m_actionStartedStressTest;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_FWDDECL
#include <Modloader/app/structs/ActionSequence.h>
#endif
#undef IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
