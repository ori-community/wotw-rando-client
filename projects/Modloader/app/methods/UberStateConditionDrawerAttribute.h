#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberStateConditionDrawerAttribute.h>

namespace app::classes::UberStateConditionDrawerAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_ConditionType, app::UberStateConditionDrawerAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::UberStateConditionDrawerAttribute* this_ptr, app::Type* condition_type)
} // namespace app::classes::UberStateConditionDrawerAttribute
