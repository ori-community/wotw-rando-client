#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InstanceMethodCallExpression1.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression1 {
    IL2CPP_REGISTER_METHOD(0x022D0620, void, ctor, (app::InstanceMethodCallExpression1 * this_ptr, app::MethodInfo_1* method_1, app::Expression* instance, app::Expression* arg0))
    IL2CPP_REGISTER_METHOD(0x022D0660, app::Expression*, GetArgument, (app::InstanceMethodCallExpression1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ArgumentCount, (app::InstanceMethodCallExpression1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0730, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::InstanceMethodCallExpression1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0740, app::MethodCallExpression*, Rewrite, (app::InstanceMethodCallExpression1 * this_ptr, app::Expression* instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args))
} // namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression1
