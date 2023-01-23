#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject__ {
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_List_1_UnityEngine_GameObject_, GetEnumerator, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725658, Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* key, app::List_1_UnityEngine_GameObject_** value))
    IL2CPP_REGISTER_METHODINFO(0x0478A2D8, Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* key, app::List_1_UnityEngine_GameObject_* value))
    IL2CPP_REGISTER_METHODINFO(0x04749290, Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject_*, get_Values, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470FA28, Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject__get_Values__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04736B10, Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject__
