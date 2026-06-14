#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_DEFINED
struct GameObject;
struct ISpiritLeashAttackable;
struct IAttackable;
struct GrabbableSurface;
struct SeinSpiritLeashAbility_LeashableInfo {
    struct GameObject* GameObject;
    struct Vector3 AttackableRelativePosition;
    struct Vector3 SurfaceWorldPos;
    struct ISpiritLeashAttackable* SpiritLeashAttackable;
    struct IAttackable* Attackable;
    struct GrabbableSurface* Surface;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/ISpiritLeashAttackable.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritLeashAbility_LeashableInfo_FWDDECL)
#include <Modloader/app/structs/SeinSpiritLeashAbility_LeashableInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritLeashAbility_LeashableInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
