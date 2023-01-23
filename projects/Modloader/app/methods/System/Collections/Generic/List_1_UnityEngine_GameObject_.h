#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IEnumerable_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Predicate_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Action_1_UnityEngine_GameObject_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, (app::List_1_UnityEngine_GameObject_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047810C8, List_1_UnityEngine_GameObject___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::GameObject__Array*, ToArray, (app::List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710F20, List_1_UnityEngine_GameObject__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02027AB0, int32_t, get_Capacity, (app::List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478DD28, List_1_UnityEngine_GameObject__get_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8790, void, set_Capacity, (app::List_1_UnityEngine_GameObject_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0474C468, List_1_UnityEngine_GameObject__set_Capacity__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04790130, List_1_UnityEngine_GameObject__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GameObject*, get_Item, (app::List_1_UnityEngine_GameObject_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04740460, List_1_UnityEngine_GameObject__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F0D8, List_1_UnityEngine_GameObject__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* item))
    IL2CPP_REGISTER_METHODINFO(0x04721DE0, List_1_UnityEngine_GameObject__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* item))
    IL2CPP_REGISTER_METHODINFO(0x0476C990, List_1_UnityEngine_GameObject__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, (app::List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DA78, List_1_UnityEngine_GameObject___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* item))
    IL2CPP_REGISTER_METHODINFO(0x04780D40, List_1_UnityEngine_GameObject__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_UnityEngine_GameObject_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472AEA0, List_1_UnityEngine_GameObject__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_3, (app::List_1_UnityEngine_GameObject_ * this_ptr, app::IEnumerable_1_UnityEngine_GameObject_* collection))
    IL2CPP_REGISTER_METHODINFO(0x0470ACA8, List_1_UnityEngine_GameObject___ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_GameObject_, GetEnumerator, (app::List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724A40, List_1_UnityEngine_GameObject__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_UnityEngine_GameObject_ * this_ptr, int32_t index, app::GameObject* value))
    IL2CPP_REGISTER_METHODINFO(0x047822F8, List_1_UnityEngine_GameObject__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_UnityEngine_GameObject_ * this_ptr, app::Predicate_1_UnityEngine_GameObject_* match))
    IL2CPP_REGISTER_METHODINFO(0x04730D78, List_1_UnityEngine_GameObject__RemoveAll__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_GameObject_ * this_ptr, app::IEnumerable_1_UnityEngine_GameObject_* collection))
    IL2CPP_REGISTER_METHODINFO(0x04762BA0, List_1_UnityEngine_GameObject__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE9040, void, ForEach, (app::List_1_UnityEngine_GameObject_ * this_ptr, app::Action_1_UnityEngine_GameObject_* action))
    IL2CPP_REGISTER_METHODINFO(0x0475D1A0, List_1_UnityEngine_GameObject__ForEach__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* item))
    IL2CPP_REGISTER_METHODINFO(0x04778628, List_1_UnityEngine_GameObject__IndexOf__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_GameObject_
