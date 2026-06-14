#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_DEFINED)
#include <Modloader/app/structs/EnemyPlatformMovement__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EnemyPlatformMovement__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_DEFINED
struct SpiderBatPlatformMovement__Fields {
    struct EnemyPlatformMovement__Fields _;
    bool m_suspended;
    bool m_isDeathFalling;
    struct Vector3 m_velocityBeforeSuspension;
    struct Vector3 m_angularVelocityBeforeSuspension;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatPlatformMovement__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatPlatformMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatPlatformMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
