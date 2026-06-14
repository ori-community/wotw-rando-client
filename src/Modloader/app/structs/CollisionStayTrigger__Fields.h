#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollisionStayTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollisionStayTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionStayTrigger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_CollisionStayTrigger__Fields_DEFINED
struct GameObjectFilter;
struct Condition_1;
struct LegacyAnimator__Array;
struct BaseAnimator__Array;
struct SoundSource;
struct CollisionStayTrigger__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObjectFilter* Filter;
    struct Condition_1* Condition;
    struct LegacyAnimator__Array* Animators;
    struct BaseAnimator__Array* BaseAnimators;
    struct SoundSource* EnterSound;
    struct SoundSource* ExitSound;
    struct Rect m_bounds;
    bool m_hasCollider;
    bool m_isInside;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollisionStayTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_CollisionStayTrigger__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObjectFilter.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_CollisionStayTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollisionStayTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CollisionStayTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/CollisionStayTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollisionStayTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
