#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::PhysicsUpdateHandlerManager {
    IL2CPP_REGISTER_METHOD(0x00C3B590, void, Reset, (app::PhysicsUpdateHandlerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3B7E0, void, Init, (app::PhysicsUpdateHandlerManager * this_ptr, app::Component_1__Array* update_handler_components))
    IL2CPP_REGISTER_METHOD(0x00C3BF20, void, UpdateNonFixed, (app::PhysicsUpdateHandlerManager * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00C3C1A0, void, UpdateFixed, (app::PhysicsUpdateHandlerManager * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00C3C420, void, UpdateLate, (app::PhysicsUpdateHandlerManager * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00C3C6A0, void, UpdateAll, (app::PhysicsUpdateHandlerManager * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x00C3C6E0, app::PhysicsUpdateHandlerAttribute*, GetTypeInfo, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PhysicsUpdateHandlerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C3C8A0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00C3CA10, app::IJobSystem__Array*, _Init_g__CreateSystems_5_0, (app::Dictionary_2_Moon_PhysicsUpdateHandlerAttribute_List_1_UnityEngine_Component_ * system_dictionary))
} // namespace app::classes::Moon::PhysicsUpdateHandlerManager
