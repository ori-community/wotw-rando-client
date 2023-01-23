#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InstanceMethodCallExpression.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Expression.h>

namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression {
    IL2CPP_REGISTER_METHOD(0x022D0440, void, ctor, (app::InstanceMethodCallExpression * this_ptr, app::MethodInfo_1* method_1, app::Expression* instance))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, GetInstance, (app::InstanceMethodCallExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression
