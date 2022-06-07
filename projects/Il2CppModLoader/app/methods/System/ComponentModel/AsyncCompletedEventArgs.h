#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::AsyncCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x024A0290, void, ctor_1, (app::AsyncCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A0320, void, ctor_2, (app::AsyncCompletedEventArgs * this_ptr, app::Exception * error, bool cancelled, app::Object * user_state))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_Cancelled, (app::AsyncCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Exception *, get_Error, (app::AsyncCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object *, get_UserState, (app::AsyncCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024A03E0, void, RaiseExceptionIfNecessary, (app::AsyncCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04734D58, AsyncCompletedEventArgs_RaiseExceptionIfNecessary__MethodInfo)
}
