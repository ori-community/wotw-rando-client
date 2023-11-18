#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Device.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Device {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_id, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_id, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_localId, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_localId, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_authId, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_authId, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_authSecId, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_authSecId, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_deviceClass, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_deviceClass, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_orgId, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_orgId, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String*, get_make, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_make, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_orgAuthId, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_orgAuthId, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_model, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_model, (app::Device * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FCC50, void, ctor_1, (app::Device * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::Device * this_ptr, app::String* full_name, app::String* name))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Device
