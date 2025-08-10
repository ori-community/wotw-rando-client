#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayBuilder_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/ArrayBuilder_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ArrayBuilder_1_System_Object_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Object_.h>

namespace app::classes::System::Linq::Expressions::ArrayBuilderExtensions {
    IL2CPP_REGISTER_METHOD(0x01EBB8E0, app::ReadOnlyCollection_1_System_Object_*, ToReadOnly_1, app::ArrayBuilder_1_System_Object_ builder)
    IL2CPP_REGISTER_METHOD(
        0x01EBB8E0,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*,
        ToReadOnly_2,
        app::ArrayBuilder_1_System_Linq_Expressions_Expression_ builder
    )
    IL2CPP_REGISTER_METHOD(
        0x01EBB8E0,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*,
        ToReadOnly_3,
        app::ArrayBuilder_1_System_Linq_Expressions_ParameterExpression_ builder
    )
} // namespace app::classes::System::Linq::Expressions::ArrayBuilderExtensions
