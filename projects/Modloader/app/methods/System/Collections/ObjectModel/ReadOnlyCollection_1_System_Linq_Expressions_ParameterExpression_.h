#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/IEnumerator_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/IList_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ParameterExpression.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ {
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, (app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EC2580, app::ParameterExpression*, get_Item, (app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DCF0, void, ctor, (app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * this_ptr, app::IList_1_System_Linq_Expressions_ParameterExpression_* list))
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_System_Linq_Expressions_ParameterExpression_*, GetEnumerator, (app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_ * this_ptr))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_
