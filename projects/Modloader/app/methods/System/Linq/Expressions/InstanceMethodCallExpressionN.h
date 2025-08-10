#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/InstanceMethodCallExpressionN.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpressionN {
    IL2CPP_REGISTER_METHOD(
        0x022D0620,
        void,
        ctor,
        app::InstanceMethodCallExpressionN* this_ptr,
        app::MethodInfo_1* method_1,
        app::Expression* instance,
        app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args
    )
    IL2CPP_REGISTER_METHOD(0x022D0D80, app::Expression*, GetArgument, app::InstanceMethodCallExpressionN* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x022D0E20, int32_t, get_ArgumentCount, app::InstanceMethodCallExpressionN* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x022D0EB0,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*,
        GetOrMakeArguments,
        app::InstanceMethodCallExpressionN* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x022D0F30,
        app::MethodCallExpression*,
        Rewrite,
        app::InstanceMethodCallExpressionN* this_ptr,
        app::Expression* instance,
        app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args
    )
} // namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpressionN
