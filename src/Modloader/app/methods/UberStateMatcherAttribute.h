#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberStateMatcherAttribute.h>

namespace app::classes::UberStateMatcherAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_InputType, app::UberStateMatcherAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::UberStateMatcherAttribute* this_ptr, app::Type* modifier_type)
} // namespace app::classes::UberStateMatcherAttribute
