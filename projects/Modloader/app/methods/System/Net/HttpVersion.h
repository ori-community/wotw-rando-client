#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HttpVersion.h>

namespace app::classes::System::Net::HttpVersion {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HttpVersion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E598C0, void, cctor, ())
} // namespace app::classes::System::Net::HttpVersion
