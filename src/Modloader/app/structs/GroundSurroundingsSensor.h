#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundSurroundingsSensor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundSurroundingsSensor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundSurroundingsSensor_DEFINED)
#define IL2CPP_STRUCT_GroundSurroundingsSensor_DEFINED
struct GroundSurroundingsSensor {
    float MinDistanceFromLedge;
    float MinDistanceFromBackLedge;
    float MinDistanceFromWall;
    float MinDistanceFromBackWall;
    float m_distanceFromFrontWall;
    float m_distanceFromBackWall;
    bool m_frontEdgeEndsWithWall;
    bool m_backEdgeEndsWithWall;
};
#endif
#if !defined(IL2CPP_STRUCT_GroundSurroundingsSensor_FWDDECL)
#define IL2CPP_STRUCT_GroundSurroundingsSensor_FWDDECL
#endif
#undef IL2CPP_STRUCT_GroundSurroundingsSensor_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundSurroundingsSensor_DEFINED) && !defined(IL2CPP_STRUCT_GroundSurroundingsSensor_FWDDECL)
#include <Modloader/app/structs/GroundSurroundingsSensor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundSurroundingsSensor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
