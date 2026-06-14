#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WebConnection_AbortHelper.h>

namespace app::classes::System::Net::WebConnection_AbortHelper {
    IL2CPP_REGISTER_METHOD(0x01D68A00, void, Abort, app::WebConnection_AbortHelper* this_ptr, app::Object* sender, app::EventArgs* args)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::WebConnection_AbortHelper* this_ptr)
} // namespace app::classes::System::Net::WebConnection_AbortHelper
