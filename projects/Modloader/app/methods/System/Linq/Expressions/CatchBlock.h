#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::CatchBlock {
    IL2CPP_REGISTER_METHOD(0x01FA0FE0, void, ctor, (app::CatchBlock * this_ptr, app::Type* test, app::ParameterExpression* variable, app::Expression* body, app::Expression* filter))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::ParameterExpression*, get_Variable, (app::CatchBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_Test, (app::CatchBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Expression*, get_Body, (app::CatchBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Expression*, get_Filter, (app::CatchBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA1000, app::String*, ToString, (app::CatchBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA1010, app::CatchBlock*, Update, (app::CatchBlock * this_ptr, app::ParameterExpression* variable, app::Expression* filter, app::Expression* body))
} // namespace app::classes::System::Linq::Expressions::CatchBlock
