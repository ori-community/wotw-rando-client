#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WebProxyData.h>

namespace app::classes::System::Net::WebProxyData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WebProxyData * this_ptr))
}
