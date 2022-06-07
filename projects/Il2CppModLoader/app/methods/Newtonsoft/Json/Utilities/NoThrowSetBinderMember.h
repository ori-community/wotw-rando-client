#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::NoThrowSetBinderMember {
    IL2CPP_REGISTER_METHOD(0x0301F100, void, ctor, (app::NoThrowSetBinderMember * this_ptr, app::SetMemberBinder * inner_binder))
    IL2CPP_REGISTER_METHOD(0x0301F1D0, app::DynamicMetaObject *, FallbackSetMember, (app::NoThrowSetBinderMember * this_ptr, app::DynamicMetaObject * target, app::DynamicMetaObject * value, app::DynamicMetaObject * error_suggestion))
}
