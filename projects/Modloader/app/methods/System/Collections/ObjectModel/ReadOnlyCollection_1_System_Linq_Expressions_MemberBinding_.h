#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/IEnumerator_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/MemberBinding.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ {
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, (app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EC2580, app::MemberBinding*, get_Item, (app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02B7DF30, app::IEnumerator_1_System_Linq_Expressions_MemberBinding_*, GetEnumerator, (app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_ * this_ptr))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_
