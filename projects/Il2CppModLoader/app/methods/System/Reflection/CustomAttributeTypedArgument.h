#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Reflection::CustomAttributeTypedArgument {
    IL2CPP_REGISTER_METHOD(0x001FC9A0, void, ctor, (app::CustomAttributeTypedArgument__Boxed * this_ptr, app::Type* argument_type, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x047095F8, CustomAttributeTypedArgument__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00107C10, app::Object*, get_Value, (app::CustomAttributeTypedArgument__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FC9B0, app::String*, ToString, (app::CustomAttributeTypedArgument__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001FC9C0, bool, Equals, (app::CustomAttributeTypedArgument__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001FC9D0, int32_t, GetHashCode, (app::CustomAttributeTypedArgument__Boxed * this_ptr))
} // namespace app::classes::System::Reflection::CustomAttributeTypedArgument
