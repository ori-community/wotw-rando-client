#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_DEFINED)
#include <Modloader/app/structs/PlatformingMovement__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_PlatformingMovement__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_DEFINED
struct MovingGroundHelper;
struct NewEntityPlatformMovement_KickbackEntry;
struct NewEntityPlatformMovement_AirSuspension;
struct NewEntityPlatformMovement__Fields {
    struct PlatformingMovement__Fields _;
    float LandAnticipationTime;
    struct Vector2 AdditiveLocalSpeed;
    bool HeadAgainstWall;
    bool FeetAgainstWall;
    struct MovingGroundHelper* m_movingGround;
    bool m_anticipatingLanding;
    struct NewEntityPlatformMovement_KickbackEntry* m_kickback;
    struct NewEntityPlatformMovement_AirSuspension* m_airSuspension;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_FWDDECL
#include <Modloader/app/structs/MovingGroundHelper.h>
#include <Modloader/app/structs/NewEntityPlatformMovement_AirSuspension.h>
#include <Modloader/app/structs/NewEntityPlatformMovement_KickbackEntry.h>
#endif
#undef IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewEntityPlatformMovement__Fields_FWDDECL)
#include <Modloader/app/structs/NewEntityPlatformMovement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewEntityPlatformMovement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
