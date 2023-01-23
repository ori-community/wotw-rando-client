#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_KeyCode_System_String_.h>
#include <Modloader/app/structs/KeyCode__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_KeyCode_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_UnityEngine_KeyCode_System_String_ * this_ptr, app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0473D7F0, Dictionary_2_UnityEngine_KeyCode_System_String__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C35530, app::String*, get_Item, (app::Dictionary_2_UnityEngine_KeyCode_System_String_ * this_ptr, app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0470DC88, Dictionary_2_UnityEngine_KeyCode_System_String__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_UnityEngine_KeyCode_System_String_ * this_ptr, app::KeyCode__Enum key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04717C28, Dictionary_2_UnityEngine_KeyCode_System_String__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_KeyCode_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752208, Dictionary_2_UnityEngine_KeyCode_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_KeyCode_System_String_ * this_ptr, app::KeyCode__Enum key, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0470C6E8, Dictionary_2_UnityEngine_KeyCode_System_String__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_KeyCode_System_String_
