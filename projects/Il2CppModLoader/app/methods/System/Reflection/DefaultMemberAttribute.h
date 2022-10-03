#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Reflection::DefaultMemberAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::DefaultMemberAttribute * this_ptr, app::String* member_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_MemberName, (app::DefaultMemberAttribute * this_ptr))
} // namespace app::classes::System::Reflection::DefaultMemberAttribute
