#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartDamageCheckAction.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LayerMask.h>

namespace app::classes::CartDamageCheckAction {
    IL2CPP_REGISTER_METHOD(0x00B35ED0, void, Perform, app::CartDamageCheckAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00B35FA0, void, Awake, app::CartDamageCheckAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B36080, void, Update, app::CartDamageCheckAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B360B0, void, HandleCollisions, app::CartDamageCheckAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00616460, bool, IsOnMask, app::CartDamageCheckAction* this_ptr, int32_t layer, app::LayerMask layer_mask)
    IL2CPP_REGISTER_METHOD(0x00B36590, bool, ColliderCanDealDamage, app::CartDamageCheckAction* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00B36700, void, CheckCollision, app::CartDamageCheckAction* this_ptr, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x00B36CC0, void, OnDrawGizmos, app::CartDamageCheckAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B372D0, void, ctor, app::CartDamageCheckAction* this_ptr)
} // namespace app::classes::CartDamageCheckAction
