#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ActionMethod {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::ActionMethod * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::ActionMethod * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x004C50B0, app::String*, GetNiceName, (app::ActionMethod * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ActionMethod * this_ptr))
} // namespace app::classes::ActionMethod
