#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MemberMemberBinding.h>
#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_MemberBinding_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_.h>

namespace app::classes::System::Linq::Expressions::MemberMemberBinding {
    IL2CPP_REGISTER_METHOD(0x01DA20E0, void, ctor, (app::MemberMemberBinding * this_ptr, app::MemberInfo_1* member, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_* bindings))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::ReadOnlyCollection_1_System_Linq_Expressions_MemberBinding_*, get_Bindings, (app::MemberMemberBinding * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBBE20, app::MemberMemberBinding*, Update, (app::MemberMemberBinding * this_ptr, app::IEnumerable_1_System_Linq_Expressions_MemberBinding_* bindings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateAsDefinedHere, (app::MemberMemberBinding * this_ptr, int32_t index))
} // namespace app::classes::System::Linq::Expressions::MemberMemberBinding
