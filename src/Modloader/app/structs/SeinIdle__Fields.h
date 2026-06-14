#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinIdle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinIdle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinIdle__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_SeinIdle__Fields_DEFINED
struct MoonAnimation;
struct Func_1_Boolean_;
struct SeinIdle__Fields {
    struct CharacterState__Fields _;
    bool m_wasIdling;
    float m_idleTime;
    float YawnAnimationDelay;
    struct ActiveAnimationHandle m_activeAnimation;
    struct MoonAnimation* m_lastAnimation;
    struct Func_1_Boolean_* m_shouldIdleKeepPlayingDelegate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinIdle__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinIdle__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinIdle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinIdle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinIdle__Fields_FWDDECL)
#include <Modloader/app/structs/SeinIdle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinIdle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
