#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Net.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Net {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_provider, (app::Net * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_provider, (app::Net * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_cost, (app::Net * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_cost, (app::Net * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_type, (app::Net * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_type, (app::Net * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Net * this_ptr))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Net
