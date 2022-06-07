#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::XPath::XPathNavigatorKeyComparer {
    IL2CPP_REGISTER_METHOD(0x01957B90, bool, IEqualityComparer_Equals, (app::XPathNavigatorKeyComparer * this_ptr, app::Object * obj1, app::Object * obj2))
    IL2CPP_REGISTER_METHOD(0x01957CC0, int32_t, IEqualityComparer_GetHashCode, (app::XPathNavigatorKeyComparer * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x0472EDB0, XPathNavigatorKeyComparer_System_Collections_IEqualityComparer_GetHashCode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XPathNavigatorKeyComparer * this_ptr))
}
