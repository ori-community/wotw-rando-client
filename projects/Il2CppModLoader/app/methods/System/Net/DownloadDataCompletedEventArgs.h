#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::DownloadDataCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::DownloadDataCompletedEventArgs * this_ptr, app::Byte__Array* result, app::Exception* exception, bool cancelled, app::Object* user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Byte__Array*, get_Result, (app::DownloadDataCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01EB4020, void, ctor_2, (app::DownloadDataCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047410C0, DownloadDataCompletedEventArgs__ctor_1__MethodInfo)
} // namespace app::classes::System::Net::DownloadDataCompletedEventArgs
