#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::LabelTarget {
    IL2CPP_REGISTER_METHOD(0x0231B8E0, void, ctor, (app::LabelTarget * this_ptr, app::Type* type, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::LabelTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_Type, (app::LabelTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02417230, app::String*, ToString, (app::LabelTarget * this_ptr))
} // namespace app::classes::System::Linq::Expressions::LabelTarget
