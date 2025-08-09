#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContextCallbackObject.h>
#include <Modloader/app/structs/CrossContextDelegate.h>

namespace app::classes::System::Runtime::Remoting::Contexts::ContextCallbackObject {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DoCallBack, app::ContextCallbackObject* this_ptr, app::CrossContextDelegate* deleg)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ContextCallbackObject* this_ptr)
} // namespace app::classes::System::Runtime::Remoting::Contexts::ContextCallbackObject
