#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Action_.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Action_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_System_Action_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760E70, Dictionary_2_System_Int32_System_Action___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_System_Action_ * this_ptr, int32_t key, app::Action* value))
    IL2CPP_REGISTER_METHODINFO(0x047917C0, Dictionary_2_System_Int32_System_Action__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_System_Action_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0476EF10, Dictionary_2_System_Int32_System_Action__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::Action*, get_Item, (app::Dictionary_2_System_Int32_System_Action_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x047956B8, Dictionary_2_System_Int32_System_Action__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Action_
