#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Challenge.h>

namespace app::classes::Challenge {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::Challenge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Name, (app::Challenge * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Description, (app::Challenge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Description, (app::Challenge * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_Started, (app::Challenge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_Started, (app::Challenge * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x010415E0, void, ctor, (app::Challenge * this_ptr, app::String* name, app::String* description, bool started))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, ToString, (app::Challenge * this_ptr))
} // namespace app::classes::Challenge
