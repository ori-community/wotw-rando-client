#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/MethodCallExpression2.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::MethodCallExpression2 {
    IL2CPP_REGISTER_METHOD(
        0x022D0620,
        void,
        ctor,
        app::MethodCallExpression2* this_ptr,
        app::MethodInfo_1* method_1,
        app::Expression* arg0,
        app::Expression* arg1
    )
    IL2CPP_REGISTER_METHOD(0x02FBC4E0, app::Expression*, GetArgument, app::MethodCallExpression2* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ArgumentCount, app::MethodCallExpression2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FBC3B0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, app::MethodCallExpression2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FBC5C0,
        app::MethodCallExpression*,
        Rewrite,
        app::MethodCallExpression2* this_ptr,
        app::Expression* instance,
        app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args
    )
} // namespace app::classes::System::Linq::Expressions::MethodCallExpression2
