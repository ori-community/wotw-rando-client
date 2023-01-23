#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberStateMatcherDrawerAttribute.h>

namespace app::classes::UberStateMatcherDrawerAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_MatcherType, (app::UberStateMatcherDrawerAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::UberStateMatcherDrawerAttribute * this_ptr, app::Type* modifier_type))
} // namespace app::classes::UberStateMatcherDrawerAttribute
