#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::NoAllocHelpers {
    IL2CPP_REGISTER_METHOD(0x02540D90, int32_t, SafeLength_1, (app::Array * values))
    IL2CPP_REGISTER_METHOD(0x02540DB0, void, Internal_ResizeList, (app::Object * list, int32_t size))
    IL2CPP_REGISTER_METHOD(0x02540E10, app::Array*, ExtractArrayFromList, (app::Object * list))
    IL2CPP_REGISTER_METHOD(0x015E61A0, void, ResizeList_1, (app::List_1_System_Object_ * list, int32_t size))
    IL2CPP_REGISTER_METHODINFO(0x0478B028, NoAllocHelpers_ResizeList__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6120, void, EnsureListElemCount_1, (app::List_1_System_Object_ * list, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_2, (app::List_1_System_Object_ * values))
    IL2CPP_REGISTER_METHOD(0x02FF64F0, app::Object__Array*, ExtractArrayFromListT_1, (app::List_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x02FF64F0, app::Vector4__Array*, ExtractArrayFromListT_2, (app::List_1_UnityEngine_Vector4_ * list))
    IL2CPP_REGISTER_METHODINFO(0x0476CC40, NoAllocHelpers_ExtractArrayFromListT_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_3, (app::List_1_System_Int32_ * values))
    IL2CPP_REGISTER_METHODINFO(0x047489D0, NoAllocHelpers_SafeLength_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015E6120, void, EnsureListElemCount_2, (app::List_1_UnityEngine_Rect_ * list, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04705B90, NoAllocHelpers_EnsureListElemCount_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FF64F0, app::Rect__Array*, ExtractArrayFromListT_3, (app::List_1_UnityEngine_Rect_ * list))
    IL2CPP_REGISTER_METHODINFO(0x04793768, NoAllocHelpers_ExtractArrayFromListT_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_4, (app::List_1_MeshTrail_MeshTrailEmitter_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_5, (app::List_1_UnityEngine_Color32_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_6, (app::List_1_UnityEngine_Color_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_7, (app::List_1_UnityEngine_Vector2_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_8, (app::List_1_UnityEngine_Vector3_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_9, (app::List_1_UnityEngine_Vector4_ * values))
    IL2CPP_REGISTER_METHOD(0x015E62E0, void, ResizeList_2, (app::List_1_UnityEngine_Rect_ * list, int32_t size))
    IL2CPP_REGISTER_METHODINFO(0x0474E348, NoAllocHelpers_ResizeList_1__MethodInfo)
} // namespace app::classes::UnityEngine::NoAllocHelpers
