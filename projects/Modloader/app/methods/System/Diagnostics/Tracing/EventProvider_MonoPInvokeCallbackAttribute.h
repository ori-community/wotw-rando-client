#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventProvider_MonoPInvokeCallbackAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Diagnostics::Tracing::EventProvider_MonoPInvokeCallbackAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EventProvider_MonoPInvokeCallbackAttribute * this_ptr, app::Type* t))
}
