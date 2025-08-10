#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MinerPickaxeAttack.h>

namespace app::classes::MinerPickaxeAttack {
    IL2CPP_REGISTER_METHOD(0x0144E540, void, OnEntityInitialized, app::MinerPickaxeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0144E710, void, OnEnter, app::MinerPickaxeAttack* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0144EBE0, void, OnExit, app::MinerPickaxeAttack* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0144F080, void, SetToUnprotected, app::MinerPickaxeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0144F0C0, void, SetToProtected, app::MinerPickaxeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0144F110, void, GroundHit, app::MinerPickaxeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0144F330, void, UpdateAnimBlend, app::MinerPickaxeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0144F3A0, void, CalculateSlope, app::MinerPickaxeAttack* this_ptr, float* slope_value)
    IL2CPP_REGISTER_METHOD(0x0144F7E0, void, SetAnimationBlendValue, app::MinerPickaxeAttack* this_ptr, float slope_value)
    IL2CPP_REGISTER_METHOD(0x0144F830, void, OnDrawGizmosSelected, app::MinerPickaxeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0144F9C0, void, OnDrawGizmos, app::MinerPickaxeAttack* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0144FAC0, void, ctor, app::MinerPickaxeAttack* this_ptr)
} // namespace app::classes::MinerPickaxeAttack
