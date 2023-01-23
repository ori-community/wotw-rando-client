#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WebRequest.h>
#include <Modloader/app/structs/FtpRequestCreator.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::System::Net::FtpRequestCreator {
    IL2CPP_REGISTER_METHOD(0x01D2EE40, app::WebRequest*, Create, (app::FtpRequestCreator * this_ptr, app::Uri* uri))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FtpRequestCreator * this_ptr))
} // namespace app::classes::System::Net::FtpRequestCreator
