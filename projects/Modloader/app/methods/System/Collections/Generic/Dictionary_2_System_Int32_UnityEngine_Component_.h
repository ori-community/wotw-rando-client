#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_Component_.h>
#include <Modloader/app/structs/Component_1.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_Component_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Int32_UnityEngine_Component_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04701588, Dictionary_2_System_Int32_UnityEngine_Component__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::Component_1*, get_Item, (app::Dictionary_2_System_Int32_UnityEngine_Component_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0470CC18, Dictionary_2_System_Int32_UnityEngine_Component__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Int32_UnityEngine_Component_ * this_ptr, int32_t key, app::Component_1* value))
    IL2CPP_REGISTER_METHODINFO(0x04740628, Dictionary_2_System_Int32_UnityEngine_Component__set_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_Component_
