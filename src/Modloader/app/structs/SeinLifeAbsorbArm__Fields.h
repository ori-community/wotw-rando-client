#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_DEFINED
struct SeinCharacter;
struct IAttackable;
struct LineRenderer;
struct LegacyTransparencyAnimator;
struct SoundProvider;
struct SeinLifeAbsorbArm__Fields {
    struct MonoBehaviour__Fields _;
    struct SeinCharacter* m_sein;
    struct IAttackable* Target;
    struct Vector3 TargetPosition;
    float Distance;
    int32_t ArmVertexCount;
    struct LineRenderer* LineRenderer;
    float m_seed;
    struct LegacyTransparencyAnimator* TransparencyAnimator;
    struct LegacyTransparencyAnimator* GlowAnimator;
    struct SoundProvider* AttachSound;
    struct SoundProvider* DetachSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_FWDDECL
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLifeAbsorbArm__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLifeAbsorbArm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLifeAbsorbArm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
