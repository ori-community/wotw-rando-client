#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ParameterExpression.h>

namespace app::classes::System::Collections::Generic::HashSet_1_System_Linq_Expressions_ParameterExpression_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor_1, (app::HashSet_1_System_Linq_Expressions_ParameterExpression_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_System_Linq_Expressions_ParameterExpression_ * this_ptr, app::ParameterExpression* item))
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_System_Linq_Expressions_ParameterExpression_, GetEnumerator, (app::HashSet_1_System_Linq_Expressions_ParameterExpression_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4420, void, ctor_2, (app::HashSet_1_System_Linq_Expressions_ParameterExpression_ * this_ptr, app::IEnumerable_1_System_Linq_Expressions_ParameterExpression_* collection))
} // namespace app::classes::System::Collections::Generic::HashSet_1_System_Linq_Expressions_ParameterExpression_
