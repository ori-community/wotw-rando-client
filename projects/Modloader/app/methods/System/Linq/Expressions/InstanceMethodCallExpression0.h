#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/InstanceMethodCallExpression0.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>

namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression0 {
    IL2CPP_REGISTER_METHOD(0x022D0440, void, ctor, app::InstanceMethodCallExpression0* this_ptr, app::MethodInfo_1* method_1, app::Expression* instance)
    IL2CPP_REGISTER_METHOD(0x022D0470, app::Expression*, GetArgument, app::InstanceMethodCallExpression0* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ArgumentCount, app::InstanceMethodCallExpression0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x022D04D0,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*,
        GetOrMakeArguments,
        app::InstanceMethodCallExpression0* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x022D0570,
        app::MethodCallExpression*,
        Rewrite,
        app::InstanceMethodCallExpression0* this_ptr,
        app::Expression* instance,
        app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args
    )
} // namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression0
