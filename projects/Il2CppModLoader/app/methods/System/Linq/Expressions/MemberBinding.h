#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::MemberBinding {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::MemberBinding * this_ptr, app::MemberBindingType__Enum type, app::MemberInfo_1* member))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::MemberBindingType__Enum, get_BindingType, (app::MemberBinding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::MemberInfo_1*, get_Member, (app::MemberBinding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417C90, app::String*, ToString, (app::MemberBinding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417CA0, void, ValidateAsDefinedHere, (app::MemberBinding * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04789178, MemberBinding_ValidateAsDefinedHere__MethodInfo)
} // namespace app::classes::System::Linq::Expressions::MemberBinding
