#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChakramProjectileEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChakramProjectileEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChakramProjectileEffect__Fields_DEFINED)
#include <Modloader/app/structs/ChakramProjectileEffect_ChakramProjectileTriggerType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ChakramProjectileEffect_ChakramProjectileTriggerType__Enum_DEFINED)
#define IL2CPP_STRUCT_ChakramProjectileEffect__Fields_DEFINED
struct MoonTimeline;
struct ChakramProjectile;
struct ChakramProjectileEffect__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* m_timeline;
    float m_destroyDelay;
    ChakramProjectileEffect_ChakramProjectileTriggerType__Enum m_triggerType;

    struct ChakramProjectile* m_chakramProjectile;
    bool m_triggered;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChakramProjectileEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChakramProjectileEffect__Fields_FWDDECL
#include <Modloader/app/structs/ChakramProjectile.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_ChakramProjectileEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChakramProjectileEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChakramProjectileEffect__Fields_FWDDECL)
#include <Modloader/app/structs/ChakramProjectileEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChakramProjectileEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
