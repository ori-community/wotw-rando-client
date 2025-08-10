#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindingRestrictions_InstanceRestriction.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Dynamic::BindingRestrictions_InstanceRestriction {
    IL2CPP_REGISTER_METHOD(0x01F892C0, void, ctor, app::BindingRestrictions_InstanceRestriction* this_ptr, app::Expression* parameter, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x01F89370, bool, Equals, app::BindingRestrictions_InstanceRestriction* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01F89440, int32_t, GetHashCode, app::BindingRestrictions_InstanceRestriction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F89480, app::Expression*, GetExpression, app::BindingRestrictions_InstanceRestriction* this_ptr)
} // namespace app::classes::System::Dynamic::BindingRestrictions_InstanceRestriction
