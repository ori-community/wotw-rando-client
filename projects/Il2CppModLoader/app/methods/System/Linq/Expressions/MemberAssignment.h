#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::MemberAssignment {
    IL2CPP_REGISTER_METHOD(0x009317D0, void, ctor, (app::MemberAssignment * this_ptr, app::MemberInfo_1* member, app::Expression* expression))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Expression*, get_Expression, (app::MemberAssignment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417BC0, app::MemberAssignment*, Update, (app::MemberAssignment * this_ptr, app::Expression* expression))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateAsDefinedHere, (app::MemberAssignment * this_ptr, int32_t index))
} // namespace app::classes::System::Linq::Expressions::MemberAssignment
