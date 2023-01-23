#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_SmartInput_IButtonInput_.h>
#include <Modloader/app/structs/IButtonInput.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SmartInput_IButtonInput_.h>

namespace app::classes::System::Collections::Generic::List_1_SmartInput_IButtonInput_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SmartInput_IButtonInput_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473A858, List_1_SmartInput_IButtonInput__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IButtonInput*, get_Item, (app::List_1_SmartInput_IButtonInput_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0471DF80, List_1_SmartInput_IButtonInput__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SmartInput_IButtonInput_, GetEnumerator, (app::List_1_SmartInput_IButtonInput_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D740, List_1_SmartInput_IButtonInput__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_SmartInput_IButtonInput_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749CC0, List_1_SmartInput_IButtonInput___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_SmartInput_IButtonInput_ * this_ptr, app::IButtonInput* item))
    IL2CPP_REGISTER_METHODINFO(0x04718FD8, List_1_SmartInput_IButtonInput__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_SmartInput_IButtonInput_ * this_ptr, app::IButtonInput* item))
    IL2CPP_REGISTER_METHODINFO(0x0471F3E0, List_1_SmartInput_IButtonInput__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_SmartInput_IButtonInput_ * this_ptr, app::IButtonInput* item))
    IL2CPP_REGISTER_METHODINFO(0x0470D840, List_1_SmartInput_IButtonInput__Remove__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SmartInput_IButtonInput_
