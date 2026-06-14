#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProtectiveLightRadial__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProtectiveLightRadial__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtectiveLightRadial__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SpiritLightRadialVisualAffector__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SpiritLightRadialVisualAffector__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ProtectiveLightRadial__Fields_DEFINED
struct GameObject;
struct ProtectiveLightRadial__Fields {
    struct SpiritLightRadialVisualAffector__Fields _;
    bool UseEffect;
    struct GameObject* Effect;
    struct Rect m_bounds;
    struct GameObject* EffectInstance;
    struct Vector3 m_effectScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProtectiveLightRadial__Fields_FWDDECL)
#define IL2CPP_STRUCT_ProtectiveLightRadial__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_ProtectiveLightRadial__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProtectiveLightRadial__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ProtectiveLightRadial__Fields_FWDDECL)
#include <Modloader/app/structs/ProtectiveLightRadial__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProtectiveLightRadial__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
