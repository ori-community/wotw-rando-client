#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SetupState {
    IL2CPP_REGISTER_METHOD(0x03144EB0, void, ctor, (app::SetupState * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Index, (app::SetupState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Name, (app::SetupState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_NotMappable, (app::SetupState * this_ptr))
} // namespace app::classes::SetupState
