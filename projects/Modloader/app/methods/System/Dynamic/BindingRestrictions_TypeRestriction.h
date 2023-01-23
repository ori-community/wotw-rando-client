#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BindingRestrictions_TypeRestriction.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Dynamic::BindingRestrictions_TypeRestriction {
    IL2CPP_REGISTER_METHOD(0x01F8A5D0, void, ctor, (app::BindingRestrictions_TypeRestriction * this_ptr, app::Expression* parameter, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01F8A680, bool, Equals, (app::BindingRestrictions_TypeRestriction * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01F8A760, int32_t, GetHashCode, (app::BindingRestrictions_TypeRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F8A7D0, app::Expression*, GetExpression, (app::BindingRestrictions_TypeRestriction * this_ptr))
} // namespace app::classes::System::Dynamic::BindingRestrictions_TypeRestriction
