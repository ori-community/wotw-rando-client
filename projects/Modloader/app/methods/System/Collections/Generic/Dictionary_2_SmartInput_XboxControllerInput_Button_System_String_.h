#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_.h>
#include <Modloader/app/structs/XboxControllerInput_Button__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_ * this_ptr, app::XboxControllerInput_Button__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x047095A0, Dictionary_2_SmartInput_XboxControllerInput_Button_System_String__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C35530, app::String*, get_Item, (app::Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_ * this_ptr, app::XboxControllerInput_Button__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04796030, Dictionary_2_SmartInput_XboxControllerInput_Button_System_String__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_ * this_ptr, app::XboxControllerInput_Button__Enum key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0478CC80, Dictionary_2_SmartInput_XboxControllerInput_Button_System_String__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04703930, Dictionary_2_SmartInput_XboxControllerInput_Button_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_ * this_ptr, app::XboxControllerInput_Button__Enum key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04715268, Dictionary_2_SmartInput_XboxControllerInput_Button_System_String__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_SmartInput_XboxControllerInput_Button_System_String_
