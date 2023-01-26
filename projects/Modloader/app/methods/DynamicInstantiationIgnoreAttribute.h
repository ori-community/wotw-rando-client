#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationIgnoreAttribute.h>

namespace app::classes::DynamicInstantiationIgnoreAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DynamicInstantiationIgnoreAttribute * this_ptr))
}
