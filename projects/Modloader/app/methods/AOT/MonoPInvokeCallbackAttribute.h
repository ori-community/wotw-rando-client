#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MonoPInvokeCallbackAttribute_1.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::AOT::MonoPInvokeCallbackAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MonoPInvokeCallbackAttribute_1* this_ptr, app::Type* type)
}
