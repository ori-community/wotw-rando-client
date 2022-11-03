#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::HttpRequestCreator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::HttpRequestCreator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E58D60, app::WebRequest*, Create, (app::HttpRequestCreator * this_ptr, app::Uri* uri))
} // namespace app::classes::System::Net::HttpRequestCreator
