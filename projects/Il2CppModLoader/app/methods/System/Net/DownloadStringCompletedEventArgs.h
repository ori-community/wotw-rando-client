#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::DownloadStringCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::DownloadStringCompletedEventArgs * this_ptr, app::String * result, app::Exception * exception, bool cancelled, app::Object * user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::String *, get_Result, (app::DownloadStringCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EB40B0, void, ctor_2, (app::DownloadStringCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732228, DownloadStringCompletedEventArgs__ctor_1__MethodInfo)
}
