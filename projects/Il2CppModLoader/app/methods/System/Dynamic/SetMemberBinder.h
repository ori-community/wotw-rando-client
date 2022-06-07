#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Dynamic::SetMemberBinder {
    IL2CPP_REGISTER_METHOD(0x01F939D0, void, ctor, (app::SetMemberBinder * this_ptr, app::String * name, bool ignore_case))
    IL2CPP_REGISTER_METHOD(0x01F93A80, app::Type *, get_ReturnType, (app::SetMemberBinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Name, (app::SetMemberBinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_IgnoreCase, (app::SetMemberBinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F93B20, app::DynamicMetaObject *, Bind, (app::SetMemberBinder * this_ptr, app::DynamicMetaObject * target, app::DynamicMetaObject__Array * args))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsStandardBinder, (app::SetMemberBinder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F93C40, app::DynamicMetaObject *, FallbackSetMember, (app::SetMemberBinder * this_ptr, app::DynamicMetaObject * target, app::DynamicMetaObject * value))
}
