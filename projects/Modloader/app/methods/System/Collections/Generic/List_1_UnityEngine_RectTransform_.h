#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_RectTransform_.h>
#include <Modloader/app/structs/RectTransform.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_RectTransform_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_RectTransform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047912C0, List_1_UnityEngine_RectTransform__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RectTransform*, get_Item, (app::List_1_UnityEngine_RectTransform_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04764228, List_1_UnityEngine_RectTransform__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_UnityEngine_RectTransform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740EA0, List_1_UnityEngine_RectTransform___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_RectTransform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04797A60, List_1_UnityEngine_RectTransform__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UnityEngine_RectTransform_ * this_ptr, app::RectTransform* item))
    IL2CPP_REGISTER_METHODINFO(0x0471C770, List_1_UnityEngine_RectTransform__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_RectTransform_
