#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberSwarm.h>
#include <Modloader/app/structs/UberSwarmer.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::UberSwarmer {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberSwarm*, get_Swarm, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128DBE0, void, AddToSwarm, (app::UberSwarmer * this_ptr, app::UberSwarm* swarm))
    IL2CPP_REGISTER_METHOD(0x0128DD60, void, RemoveFromSwarm, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128DE70, void, Flock, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128E2C0, app::Vector2, CalculateExtraVelocities, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128E350, void, CalculateVelocities, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128EAF0, app::Vector2, CheckObstacles, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128ED70, bool, CheckObstaclesForAngle, (app::UberSwarmer * this_ptr, float angle, float distance, app::Vector2* movement))
    IL2CPP_REGISTER_METHOD(0x0128F0C0, app::Vector2, Steer, (app::UberSwarmer * this_ptr, app::Vector2 target, bool inverse))
    IL2CPP_REGISTER_METHOD(0x0128F2E0, app::Vector2, Limit, (app::UberSwarmer * this_ptr, app::Vector2 v, float max))
    IL2CPP_REGISTER_METHOD(0x0128F3F0, float, RayTest, (app::UberSwarmer * this_ptr, app::Vector2 direction, float max_distance))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_IsSuspended, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585320, void, set_IsSuspended, (app::UberSwarmer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::SuspendableMask__Enum, get_Mask, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0128F5C0, void, set_Mask, (app::UberSwarmer * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0128F670, bool, ISwarmer_get_IsActive, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799030, UberSwarmer_ISwarmer_get_IsActive__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0128F6C0, void, ISwarmer_set_IsActive, (app::UberSwarmer * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x047270D8, UberSwarmer_ISwarmer_set_IsActive__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0128F710, void, DrawGizmos, (app::UberSwarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01290230, void, ctor, (app::UberSwarmer * this_ptr))
} // namespace app::classes::UberSwarmer
