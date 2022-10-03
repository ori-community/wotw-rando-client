#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::ComponentModel::ProgressChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x029923D0, void, ctor, (app::ProgressChangedEventArgs * this_ptr, int32_t progress_percentage, app::Object* user_state))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ProgressPercentage, (app::ProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_UserState, (app::ProgressChangedEventArgs * this_ptr))
} // namespace app::classes::System::ComponentModel::ProgressChangedEventArgs
