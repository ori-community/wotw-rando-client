#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_System_Dynamic_BindingRestrictions_.h>
#include <Modloader/app/structs/BindingRestrictions.h>
#include <Modloader/app/structs/BindingRestrictions__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Dynamic_BindingRestrictions_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Dynamic_BindingRestrictions_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752A18, List_1_System_Dynamic_BindingRestrictions___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Dynamic_BindingRestrictions_ * this_ptr, app::BindingRestrictions* item))
    IL2CPP_REGISTER_METHODINFO(0x0474EAB8, List_1_System_Dynamic_BindingRestrictions__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::BindingRestrictions__Array*, ToArray, (app::List_1_System_Dynamic_BindingRestrictions_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752C58, List_1_System_Dynamic_BindingRestrictions__ToArray__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Dynamic_BindingRestrictions_
