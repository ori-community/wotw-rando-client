#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_GameObject_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04784BD8, Dictionary_2_System_Int32_UnityEngine_GameObject__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_UnityEngine_GameObject_ * this_ptr, int32_t key, app::GameObject* value))
    IL2CPP_REGISTER_METHODINFO(0x04795138, Dictionary_2_System_Int32_UnityEngine_GameObject__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Int32_UnityEngine_GameObject_, GetEnumerator, (app::Dictionary_2_System_Int32_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783A80, Dictionary_2_System_Int32_UnityEngine_GameObject__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA360, bool, Remove, (app::Dictionary_2_System_Int32_UnityEngine_GameObject_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x047709A8, Dictionary_2_System_Int32_UnityEngine_GameObject__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Int32_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D470, Dictionary_2_System_Int32_UnityEngine_GameObject___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_GameObject_*, get_Values, (app::Dictionary_2_System_Int32_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04737B70, Dictionary_2_System_Int32_UnityEngine_GameObject__get_Values__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Int32_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736630, Dictionary_2_System_Int32_UnityEngine_GameObject__Clear__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_UnityEngine_GameObject_
