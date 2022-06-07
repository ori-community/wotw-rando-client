#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::SecurityElement_SecurityAttribute {
    IL2CPP_REGISTER_METHOD(0x01E216B0, void, ctor, (app::SecurityElement_SecurityAttribute * this_ptr, app::String * name, app::String * value))
    IL2CPP_REGISTER_METHODINFO(0x04727908, SecurityElement_SecurityAttribute__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Name, (app::SecurityElement_SecurityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Value, (app::SecurityElement_SecurityAttribute * this_ptr))
}
