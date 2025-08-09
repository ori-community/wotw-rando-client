#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/MethodCallExpression0.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::MethodCallExpression0 {
    IL2CPP_REGISTER_METHOD(0x02FBC130, void, ctor, app::MethodCallExpression0* this_ptr, app::MethodInfo_1* method_1)
    IL2CPP_REGISTER_METHOD(0x02FBC140, app::Expression*, GetArgument, app::MethodCallExpression0* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ArgumentCount, app::MethodCallExpression0* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02FBC1A0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, app::MethodCallExpression0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FBC240,
        app::MethodCallExpression*,
        Rewrite,
        app::MethodCallExpression0* this_ptr,
        app::Expression* instance,
        app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args
    )
} // namespace app::classes::System::Linq::Expressions::MethodCallExpression0
