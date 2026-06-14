#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FtpStatus.h>
#include <Modloader/app/structs/FtpStatusCode__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::FtpStatus {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, app::FtpStatus* this_ptr, app::FtpStatusCode__Enum status_code, app::String* status_description)
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::FtpStatusCode__Enum, get_StatusCode, app::FtpStatus* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_StatusDescription, app::FtpStatus* this_ptr)
} // namespace app::classes::System::Net::FtpStatus
