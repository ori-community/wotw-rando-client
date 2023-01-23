#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Stack_1_System_Dynamic_BindingRestrictions_.h>
#include <Modloader/app/structs/BindingRestrictions.h>

namespace app::classes::System::Collections::Generic::Stack_1_System_Dynamic_BindingRestrictions_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_System_Dynamic_BindingRestrictions_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738978, Stack_1_System_Dynamic_BindingRestrictions___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_System_Dynamic_BindingRestrictions_ * this_ptr, app::BindingRestrictions* item))
    IL2CPP_REGISTER_METHODINFO(0x047651C0, Stack_1_System_Dynamic_BindingRestrictions__Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_System_Dynamic_BindingRestrictions_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748B08, Stack_1_System_Dynamic_BindingRestrictions__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::BindingRestrictions*, Pop, (app::Stack_1_System_Dynamic_BindingRestrictions_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477C330, Stack_1_System_Dynamic_BindingRestrictions__Pop__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Stack_1_System_Dynamic_BindingRestrictions_
