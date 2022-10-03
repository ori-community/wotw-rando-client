#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Cloud {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_fullEnvName, (app::Cloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_fullEnvName, (app::Cloud * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_location, (app::Cloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_location, (app::Cloud * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_environment, (app::Cloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_environment, (app::Cloud * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_deploymentUnit, (app::Cloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_deploymentUnit, (app::Cloud * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_name, (app::Cloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_name, (app::Cloud * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_roleInstance, (app::Cloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_roleInstance, (app::Cloud * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_role, (app::Cloud * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_role, (app::Cloud * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Cloud * this_ptr))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Cloud
