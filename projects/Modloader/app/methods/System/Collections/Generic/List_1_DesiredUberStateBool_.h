#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesiredUberStateBool__Array.h>
#include <Modloader/app/structs/DesiredUberStateBool.h>
#include <Modloader/app/structs/List_1_DesiredUberStateBool_.h>

namespace app::classes::System::Collections::Generic::List_1_DesiredUberStateBool_ {
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::DesiredUberStateBool__Array*, ToArray, (app::List_1_DesiredUberStateBool_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_DesiredUberStateBool_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DesiredUberStateBool*, get_Item, (app::List_1_DesiredUberStateBool_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_DesiredUberStateBool_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_DesiredUberStateBool_ * this_ptr, app::DesiredUberStateBool* item))
} // namespace app::classes::System::Collections::Generic::List_1_DesiredUberStateBool_
