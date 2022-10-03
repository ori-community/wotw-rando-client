#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::UploadFileCompletedEventArgs {
    IL2CPP_REGISTER_METHOD(0x01BCB240, void, ctor_1, (app::UploadFileCompletedEventArgs * this_ptr, app::Byte__Array* result, app::Exception* exception, bool cancelled, app::Object* user_token))
    IL2CPP_REGISTER_METHOD(0x01BCB280, app::Byte__Array*, get_Result, (app::UploadFileCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ACF40, void, ctor_2, (app::UploadFileCompletedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473F768, UploadFileCompletedEventArgs__ctor_1__MethodInfo)
} // namespace app::classes::System::Net::UploadFileCompletedEventArgs
