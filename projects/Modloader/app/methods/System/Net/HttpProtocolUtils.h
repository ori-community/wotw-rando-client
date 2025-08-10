#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/HttpProtocolUtils.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::HttpProtocolUtils {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HttpProtocolUtils* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E58B00, app::DateTime, string2date, app::String* S)
    IL2CPP_REGISTER_METHOD(0x01E58BE0, app::String*, date2string, app::DateTime D)
} // namespace app::classes::System::Net::HttpProtocolUtils
