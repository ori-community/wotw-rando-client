#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerInRangeChecker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerInRangeChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInRangeChecker__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_PlayerInRangeChecker__Fields_DEFINED
struct BoxCollider;
struct PlayerInRangeChecker__Fields {
    struct Condition_1__Fields _;
    bool m_wasInside;
    bool m_hasPlayed;
    float m_time;
    struct LayerMask Mask_1;
    struct BoxCollider* m_collider;
    float checkResultDelay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerInRangeChecker__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerInRangeChecker__Fields_FWDDECL
#include <Modloader/app/structs/BoxCollider.h>
#endif
#undef IL2CPP_STRUCT_PlayerInRangeChecker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerInRangeChecker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerInRangeChecker__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerInRangeChecker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerInRangeChecker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
