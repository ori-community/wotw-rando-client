#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BindingRestrictions_MergedRestriction.h>
#include <Modloader/app/structs/BindingRestrictions.h>
#include <Modloader/app/structs/Expression.h>

namespace app::classes::System::Dynamic::BindingRestrictions_MergedRestriction {
    IL2CPP_REGISTER_METHOD(0x01F899E0, void, ctor, (app::BindingRestrictions_MergedRestriction * this_ptr, app::BindingRestrictions* left, app::BindingRestrictions* right))
    IL2CPP_REGISTER_METHOD(0x01F89A90, app::Expression*, GetExpression, (app::BindingRestrictions_MergedRestriction * this_ptr))
} // namespace app::classes::System::Dynamic::BindingRestrictions_MergedRestriction
