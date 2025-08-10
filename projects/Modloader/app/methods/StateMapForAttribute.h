#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StateMapForAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::StateMapForAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_ServableType, app::StateMapForAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::StateMapForAttribute* this_ptr, app::Type* type)
} // namespace app::classes::StateMapForAttribute
