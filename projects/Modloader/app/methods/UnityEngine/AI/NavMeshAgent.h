#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NavMeshAgent.h>
#include <Modloader/app/structs/NavMeshHit.h>
#include <Modloader/app/structs/NavMeshPath.h>
#include <Modloader/app/structs/NavMeshPathStatus__Enum.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/ObstacleAvoidanceType__Enum.h>
#include <Modloader/app/structs/OffMeshLinkData.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::AI::NavMeshAgent {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B11F0, bool, SetDestination, (app::NavMeshAgent * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x031B1250, bool, INTERNAL_CALL_SetDestination, (app::NavMeshAgent * self, app::Vector3* target))
    IL2CPP_REGISTER_METHOD(0x031B12B0, app::Vector3, get_destination, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1330, void, set_destination, (app::NavMeshAgent * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x031B1390, void, INTERNAL_get_destination, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B13F0, void, INTERNAL_set_destination, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B1450, float, get_stoppingDistance, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B14A0, void, set_stoppingDistance, (app::NavMeshAgent * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031B1500, app::Vector3, get_velocity, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1580, void, set_velocity, (app::NavMeshAgent * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x031B15E0, void, INTERNAL_get_velocity, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B1640, void, INTERNAL_set_velocity, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B16A0, app::Vector3, get_nextPosition, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1720, void, set_nextPosition, (app::NavMeshAgent * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x031B1780, void, INTERNAL_get_nextPosition, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B17E0, void, INTERNAL_set_nextPosition, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B1840, app::Vector3, get_steeringTarget, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B18C0, void, INTERNAL_get_steeringTarget, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B1920, app::Vector3, get_desiredVelocity, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B19A0, void, INTERNAL_get_desiredVelocity, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B1A00, float, get_remainingDistance, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1A50, float, get_baseOffset, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1AA0, void, set_baseOffset, (app::NavMeshAgent * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031B1B00, bool, get_isOnOffMeshLink, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1B50, void, ActivateCurrentOffMeshLink, (app::NavMeshAgent * this_ptr, bool activated))
    IL2CPP_REGISTER_METHOD(0x031B1BB0, app::OffMeshLinkData, get_currentOffMeshLinkData, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1BB0, app::OffMeshLinkData, GetCurrentOffMeshLinkDataInternal, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1C30, app::OffMeshLinkData, get_nextOffMeshLinkData, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1C30, app::OffMeshLinkData, GetNextOffMeshLinkDataInternal, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1CB0, void, CompleteOffMeshLink, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1D00, bool, get_autoTraverseOffMeshLink, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1D50, void, set_autoTraverseOffMeshLink, (app::NavMeshAgent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031B1DB0, bool, get_autoBraking, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1E00, void, set_autoBraking, (app::NavMeshAgent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031B1E60, bool, get_autoRepath, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1EB0, void, set_autoRepath, (app::NavMeshAgent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031B1F10, bool, get_hasPath, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1F60, bool, get_pathPending, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B1FB0, bool, get_isPathStale, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2000, app::NavMeshPathStatus__Enum, get_pathStatus, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2050, app::Vector3, get_pathEndPosition, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B20D0, void, INTERNAL_get_pathEndPosition, (app::NavMeshAgent * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x031B2130, bool, Warp, (app::NavMeshAgent * this_ptr, app::Vector3 new_position))
    IL2CPP_REGISTER_METHOD(0x031B2190, bool, INTERNAL_CALL_Warp, (app::NavMeshAgent * self, app::Vector3* new_position))
    IL2CPP_REGISTER_METHOD(0x031B21F0, void, Move, (app::NavMeshAgent * this_ptr, app::Vector3 offset))
    IL2CPP_REGISTER_METHOD(0x031B2250, void, INTERNAL_CALL_Move, (app::NavMeshAgent * self, app::Vector3* offset))
    IL2CPP_REGISTER_METHOD(0x031B22B0, void, Stop_1, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B22B0, void, StopInternal, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B22B0, void, Stop_2, (app::NavMeshAgent * this_ptr, bool stop_updates))
    IL2CPP_REGISTER_METHOD(0x031B2300, void, Resume, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2350, bool, get_isStopped, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B23A0, void, set_isStopped, (app::NavMeshAgent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031B2400, void, ResetPath, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2450, bool, SetPath, (app::NavMeshAgent * this_ptr, app::NavMeshPath* path))
    IL2CPP_REGISTER_METHOD(0x031B24B0, app::NavMeshPath*, get_path, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2670, void, set_path, (app::NavMeshAgent * this_ptr, app::NavMeshPath* value))
    IL2CPP_REGISTER_METHOD(0x031B2770, void, CopyPathTo, (app::NavMeshAgent * this_ptr, app::NavMeshPath* path))
    IL2CPP_REGISTER_METHOD(0x031B27D0, bool, FindClosestEdge, (app::NavMeshAgent * this_ptr, app::NavMeshHit* hit))
    IL2CPP_REGISTER_METHOD(0x031B2830, bool, Raycast, (app::NavMeshAgent * this_ptr, app::Vector3 target_position, app::NavMeshHit* hit))
    IL2CPP_REGISTER_METHOD(0x031B28A0, bool, INTERNAL_CALL_Raycast, (app::NavMeshAgent * self, app::Vector3* target_position, app::NavMeshHit* hit))
    IL2CPP_REGISTER_METHOD(0x031B2910, bool, CalculatePath, (app::NavMeshAgent * this_ptr, app::Vector3 target_position, app::NavMeshPath* path))
    IL2CPP_REGISTER_METHOD(0x031B29F0, bool, CalculatePathInternal, (app::NavMeshAgent * this_ptr, app::Vector3 target_position, app::NavMeshPath* path))
    IL2CPP_REGISTER_METHOD(0x031B2A60, bool, INTERNAL_CALL_CalculatePathInternal, (app::NavMeshAgent * self, app::Vector3* target_position, app::NavMeshPath* path))
    IL2CPP_REGISTER_METHOD(0x031B2AD0, bool, SamplePathPosition, (app::NavMeshAgent * this_ptr, int32_t area_mask, float max_distance, app::NavMeshHit* hit))
    IL2CPP_REGISTER_METHOD(0x031B2B50, void, SetLayerCost, (app::NavMeshAgent * this_ptr, int32_t layer, float cost))
    IL2CPP_REGISTER_METHOD(0x031B2BC0, float, GetLayerCost, (app::NavMeshAgent * this_ptr, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x031B2C20, void, SetAreaCost, (app::NavMeshAgent * this_ptr, int32_t area_index, float area_cost))
    IL2CPP_REGISTER_METHOD(0x031B2C90, float, GetAreaCost, (app::NavMeshAgent * this_ptr, int32_t area_index))
    IL2CPP_REGISTER_METHOD(0x031B2CF0, app::Object_1*, get_navMeshOwner, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2D40, int32_t, get_agentTypeID, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2D90, void, set_agentTypeID, (app::NavMeshAgent * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x031B2CF0, app::Object_1*, GetOwnerInternal, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2DF0, int32_t, get_walkableMask, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2E40, void, set_walkableMask, (app::NavMeshAgent * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x031B2EA0, int32_t, get_areaMask, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2EF0, void, set_areaMask, (app::NavMeshAgent * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x031B2F50, float, get_speed, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B2FA0, void, set_speed, (app::NavMeshAgent * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031B3000, float, get_angularSpeed, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3050, void, set_angularSpeed, (app::NavMeshAgent * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031B30B0, float, get_acceleration, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3100, void, set_acceleration, (app::NavMeshAgent * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031B3160, bool, get_updatePosition, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B31B0, void, set_updatePosition, (app::NavMeshAgent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031B3210, bool, get_updateRotation, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3260, void, set_updateRotation, (app::NavMeshAgent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031B32C0, bool, get_updateUpAxis, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3310, void, set_updateUpAxis, (app::NavMeshAgent * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x031B3370, float, get_radius, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B33C0, void, set_radius, (app::NavMeshAgent * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031B3420, float, get_height, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3470, void, set_height, (app::NavMeshAgent * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x031B34D0, app::ObstacleAvoidanceType__Enum, get_obstacleAvoidanceType, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B3520, void, set_obstacleAvoidanceType, (app::NavMeshAgent * this_ptr, app::ObstacleAvoidanceType__Enum value))
    IL2CPP_REGISTER_METHOD(0x031B3580, int32_t, get_avoidancePriority, (app::NavMeshAgent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031B35D0, void, set_avoidancePriority, (app::NavMeshAgent * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x031B3630, bool, get_isOnNavMesh, (app::NavMeshAgent * this_ptr))
} // namespace app::classes::UnityEngine::AI::NavMeshAgent
