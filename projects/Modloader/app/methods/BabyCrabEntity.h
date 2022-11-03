#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::BabyCrabEntity {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::CrabPlaceholderGroup*, get_Group, (app::BabyCrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Group, (app::BabyCrabEntity * this_ptr, app::CrabPlaceholderGroup* value))
    IL2CPP_REGISTER_METHOD(0x0085F420, app::IBlackboard*, get_BlackBoard, (app::BabyCrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::CrabEntity*, get_Entity, (app::BabyCrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Entity, (app::BabyCrabEntity * this_ptr, app::CrabEntity* value))
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsRunningAway, (app::BabyCrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsRunningAway, (app::BabyCrabEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0085F450, app::Vector3, get_RunPosition, (app::BabyCrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085F470, void, set_RunPosition, (app::BabyCrabEntity * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0085F480, void, Awake, (app::BabyCrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085F520, void, Update, (app::BabyCrabEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085FEA0, void, ctor, (app::BabyCrabEntity * this_ptr))
} // namespace app::classes::BabyCrabEntity
