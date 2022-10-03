#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::UploadDataCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::UploadDataCompletedEventArgs * this_ptr, app::Byte__Array* result, app::Exception* exception, bool cancelled, app::Object* user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Byte__Array*, get_Result, (app::UploadDataCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ACF10, void, ctor_2, (app::UploadDataCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04711758, UploadDataCompletedEventArgs__ctor_1__MethodInfo)
} // namespace app::classes::System::Net::UploadDataCompletedEventArgs
