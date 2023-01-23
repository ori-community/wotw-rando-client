#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MonoPInvokeCallbackAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Mono::Util::MonoPInvokeCallbackAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MonoPInvokeCallbackAttribute * this_ptr, app::Type* t))
}
