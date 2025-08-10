#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Linq_Expressions_ElementInit_.h>
#include <Modloader/app/structs/MemberInfo_1.h>
#include <Modloader/app/structs/MemberListBinding.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_.h>

namespace app::classes::System::Linq::Expressions::MemberListBinding {
    IL2CPP_REGISTER_METHOD(
        0x02FBBD30,
        void,
        ctor,
        app::MemberListBinding* this_ptr,
        app::MemberInfo_1* member,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_* initializers
    )
    IL2CPP_REGISTER_METHOD(0x002FB950, app::ReadOnlyCollection_1_System_Linq_Expressions_ElementInit_*, get_Initializers, app::MemberListBinding* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FBBD40,
        app::MemberListBinding*,
        Update,
        app::MemberListBinding* this_ptr,
        app::IEnumerable_1_System_Linq_Expressions_ElementInit_* initializers
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ValidateAsDefinedHere, app::MemberListBinding* this_ptr, int32_t index)
} // namespace app::classes::System::Linq::Expressions::MemberListBinding
