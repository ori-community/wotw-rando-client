#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_Core_Input_Command_System_Int32_.h>
#include <Modloader/app/structs/Input_Command__Enum.h>
#include <Modloader/app/structs/IEqualityComparer_1_Core_Input_Command_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Core_Input_Command_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_Core_Input_Command_System_Int32_ * this_ptr, app::Input_Command__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0476ABB0, Dictionary_2_Core_Input_Command_System_Int32__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Core_Input_Command_System_Int32_ * this_ptr, app::Input_Command__Enum key, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0470AA18, Dictionary_2_Core_Input_Command_System_Int32__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C2F6D0, int32_t, get_Item, (app::Dictionary_2_Core_Input_Command_System_Int32_ * this_ptr, app::Input_Command__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0478BF70, Dictionary_2_Core_Input_Command_System_Int32__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_Core_Input_Command_System_Int32_ * this_ptr, app::Input_Command__Enum key, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x04738220, Dictionary_2_Core_Input_Command_System_Int32__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (app::Dictionary_2_Core_Input_Command_System_Int32_ * this_ptr, app::Input_Command__Enum key, int32_t* value))
    IL2CPP_REGISTER_METHODINFO(0x0477BA00, Dictionary_2_Core_Input_Command_System_Int32__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Core_Input_Command_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04738C60, Dictionary_2_Core_Input_Command_System_Int32__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor, (app::Dictionary_2_Core_Input_Command_System_Int32_ * this_ptr, app::IEqualityComparer_1_Core_Input_Command_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0477D828, Dictionary_2_Core_Input_Command_System_Int32___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Core_Input_Command_System_Int32_
