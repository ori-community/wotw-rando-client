#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Os.h>

namespace app::classes::Microsoft::Applications::Events::DataModels::Os {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_locale, (app::Os * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_locale, (app::Os * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_expId, (app::Os * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_expId, (app::Os * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_bootId, (app::Os * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_bootId, (app::Os * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_name, (app::Os * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_name, (app::Os * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_ver, (app::Os * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_ver, (app::Os * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FD1F0, void, ctor_1, (app::Os * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::Os * this_ptr, app::String* full_name, app::String* name))
} // namespace app::classes::Microsoft::Applications::Events::DataModels::Os
