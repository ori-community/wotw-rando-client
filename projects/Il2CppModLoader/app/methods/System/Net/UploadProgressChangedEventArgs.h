#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::UploadProgressChangedEventArgs {
    IL2CPP_REGISTER_METHOD(0x020ACF70, void, ctor_1, (app::UploadProgressChangedEventArgs * this_ptr, int32_t progress_percentage, app::Object* user_token, int64_t bytes_sent, int64_t total_bytes_to_send, int64_t bytes_received, int64_t total_bytes_to_receive))
    IL2CPP_REGISTER_METHOD(0x002FB950, int64_t, get_BytesReceived, (app::UploadProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, int64_t, get_TotalBytesToReceive, (app::UploadProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, int64_t, get_BytesSent, (app::UploadProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, int64_t, get_TotalBytesToSend, (app::UploadProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ACFC0, void, ctor_2, (app::UploadProgressChangedEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761460, UploadProgressChangedEventArgs__ctor_1__MethodInfo)
} // namespace app::classes::System::Net::UploadProgressChangedEventArgs
