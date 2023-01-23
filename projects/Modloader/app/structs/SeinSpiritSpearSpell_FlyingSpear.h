#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_DEFINED
struct Transform;
struct IAttackable;
struct SoundHost;
struct SeinSpiritSpearSpell_FlyingSpear {
    struct Transform* SpearTransform;
    struct IAttackable* Attackable;
    struct Vector3 m_target;
    struct Vector3 m_originalPosition;
    float m_timer;
    float m_duration;
    struct SoundHost* SoundHost;
    int32_t DamageID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_FWDDECL
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritSpearSpell_FlyingSpear_FWDDECL)
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
