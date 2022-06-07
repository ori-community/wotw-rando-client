#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Linq::NamespaceResolver {
    IL2CPP_REGISTER_METHOD(0x00241310, void, PushScope, (app::NamespaceResolver__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241320, void, PopScope, (app::NamespaceResolver__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00241330, void, Add, (app::NamespaceResolver__Boxed * this_ptr, app::String * prefix, app::XNamespace * ns))
    IL2CPP_REGISTER_METHOD(0x00241340, void, AddFirst, (app::NamespaceResolver__Boxed * this_ptr, app::String * prefix, app::XNamespace * ns))
    IL2CPP_REGISTER_METHOD(0x00241350, app::String *, GetPrefixOfNamespace, (app::NamespaceResolver__Boxed * this_ptr, app::XNamespace * ns, bool allow_default_namespace))
}
