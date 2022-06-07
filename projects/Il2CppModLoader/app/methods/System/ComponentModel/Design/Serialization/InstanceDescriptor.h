#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::Design::Serialization::InstanceDescriptor {
    IL2CPP_REGISTER_METHOD(0x01FE4D60, void, ctor_1, (app::InstanceDescriptor * this_ptr, app::MemberInfo_1 * member, app::ICollection * arguments))
    IL2CPP_REGISTER_METHOD(0x01FE4D80, void, ctor_2, (app::InstanceDescriptor * this_ptr, app::MemberInfo_1 * member, app::ICollection * arguments, bool is_complete))
    IL2CPP_REGISTER_METHODINFO(0x0472BE68, InstanceDescriptor__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FE53F0, app::Object *, Invoke, (app::InstanceDescriptor * this_ptr))
}
