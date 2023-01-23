#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Collider_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Collider_System_Single_.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Collider_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_Collider_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047437A0, Dictionary_2_UnityEngine_Collider_System_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_UnityEngine_Collider_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04774850, Dictionary_2_UnityEngine_Collider_System_Single__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Collider_System_Single_, GetEnumerator, (app::Dictionary_2_UnityEngine_Collider_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473B3D0, Dictionary_2_UnityEngine_Collider_System_Single__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E7A6F0, bool, Remove, (app::Dictionary_2_UnityEngine_Collider_System_Single_ * this_ptr, app::Collider* key))
    IL2CPP_REGISTER_METHODINFO(0x04775A10, Dictionary_2_UnityEngine_Collider_System_Single__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_UnityEngine_Collider_System_Single_ * this_ptr, app::Collider* key))
    IL2CPP_REGISTER_METHODINFO(0x0476F548, Dictionary_2_UnityEngine_Collider_System_Single__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, (app::Dictionary_2_UnityEngine_Collider_System_Single_ * this_ptr, app::Collider* key, float value))
    IL2CPP_REGISTER_METHODINFO(0x0471E9C8, Dictionary_2_UnityEngine_Collider_System_Single__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBBD70, void, Add, (app::Dictionary_2_UnityEngine_Collider_System_Single_ * this_ptr, app::Collider* key, float value))
    IL2CPP_REGISTER_METHODINFO(0x047389E0, Dictionary_2_UnityEngine_Collider_System_Single__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02E78EF0, float, get_Item, (app::Dictionary_2_UnityEngine_Collider_System_Single_ * this_ptr, app::Collider* key))
    IL2CPP_REGISTER_METHODINFO(0x04720790, Dictionary_2_UnityEngine_Collider_System_Single__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Collider_System_Single_
