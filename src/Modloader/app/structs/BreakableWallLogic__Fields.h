#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreakableWallLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreakableWallLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakableWallLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BreakableWallLogic__Fields_DEFINED
struct DynamicDataResolver;
struct BreakableWallAnimator;
struct MoonReference_1_IGenericUberState_;
struct Vitals;
struct GameObject;
struct Collider;
struct IUberState__Array;
struct BreakableWallLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct BreakableWallAnimator* Animator;
    struct MoonReference_1_IGenericUberState_* State;
    struct Vitals* Vitals;
    struct GameObject* DisableOnDestroy;
    bool IsSecret;
    float HealthA;
    float HealthB;
    float HealthC;
    int32_t m_state;
    struct Collider* m_collider;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BreakableWallLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_BreakableWallLogic__Fields_FWDDECL
#include <Modloader/app/structs/BreakableWallAnimator.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#include <Modloader/app/structs/Vitals.h>
#endif
#undef IL2CPP_STRUCT_BreakableWallLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreakableWallLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BreakableWallLogic__Fields_FWDDECL)
#include <Modloader/app/structs/BreakableWallLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreakableWallLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
