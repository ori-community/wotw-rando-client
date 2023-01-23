#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CustomAttributeNamedArgument__Boxed.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/CustomAttributeTypedArgument.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::CustomAttributeNamedArgument {
    IL2CPP_REGISTER_METHOD(0x001FC850, void, ctor, (app::CustomAttributeNamedArgument__Boxed * this_ptr, app::MemberInfo_1* member_info, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x00107C20, app::MemberInfo_1*, get_MemberInfo, (app::CustomAttributeNamedArgument__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A980, app::CustomAttributeTypedArgument, get_TypedValue, (app::CustomAttributeNamedArgument__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FC910, app::String*, ToString, (app::CustomAttributeNamedArgument__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FC920, bool, Equals, (app::CustomAttributeNamedArgument__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001FC930, int32_t, GetHashCode, (app::CustomAttributeNamedArgument__Boxed * this_ptr))
} // namespace app::classes::System::Reflection::CustomAttributeNamedArgument
