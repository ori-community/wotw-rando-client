#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringPref.h>

namespace app::classes::Moon::PlayerPrefsUtility::StringPref {
    IL2CPP_REGISTER_METHOD(0x00C3DA40, void, ctor, app::StringPref* this_ptr, app::String* _key, app::String* _default_value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_value, app::StringPref* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C3DAC0, void, set_value, app::StringPref* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x00C3DB20, app::String*, op_Implicit, app::StringPref* _pref)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, ToString, app::StringPref* this_ptr)
} // namespace app::classes::Moon::PlayerPrefsUtility::StringPref
