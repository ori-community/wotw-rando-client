#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MinerPickaxeAttack {
    IL2CPP_REGISTER_METHOD(0x0144E540, void, OnEntityInitialized, (app::MinerPickaxeAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144E710, void, OnEnter, (app::MinerPickaxeAttack * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0144EBE0, void, OnExit, (app::MinerPickaxeAttack * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0144F080, void, SetToUnprotected, (app::MinerPickaxeAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EC00, MinerPickaxeAttack_SetToUnprotected__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144F0C0, void, SetToProtected, (app::MinerPickaxeAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475B7D0, MinerPickaxeAttack_SetToProtected__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144F110, void, GroundHit, (app::MinerPickaxeAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717770, MinerPickaxeAttack_GroundHit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144F330, void, UpdateAnimBlend, (app::MinerPickaxeAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475FCA8, MinerPickaxeAttack_UpdateAnimBlend__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0144F3A0, void, CalculateSlope, (app::MinerPickaxeAttack * this_ptr, float * slope_value))
    IL2CPP_REGISTER_METHOD(0x0144F7E0, void, SetAnimationBlendValue, (app::MinerPickaxeAttack * this_ptr, float slope_value))
    IL2CPP_REGISTER_METHOD(0x0144F830, void, OnDrawGizmosSelected, (app::MinerPickaxeAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144F9C0, void, OnDrawGizmos, (app::MinerPickaxeAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0144FAC0, void, ctor, (app::MinerPickaxeAttack * this_ptr))
}
