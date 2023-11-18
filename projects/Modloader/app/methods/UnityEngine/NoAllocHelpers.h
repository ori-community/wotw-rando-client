#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/List_1_MeshTrail_MeshTrailEmitter_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Color_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector4_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/Rect__Array.h>
#include <Modloader/app/structs/Vector4__Array.h>

namespace app::classes::UnityEngine::NoAllocHelpers {
    IL2CPP_REGISTER_METHOD(0x02540D90, int32_t, SafeLength_1, (app::Array * values))
    IL2CPP_REGISTER_METHOD(0x02540DB0, void, Internal_ResizeList, (app::Object * list, int32_t size))
    IL2CPP_REGISTER_METHOD(0x02540E10, app::Array*, ExtractArrayFromList, (app::Object * list))
    IL2CPP_REGISTER_METHOD(0x015E61A0, void, ResizeList_1, (app::List_1_System_Object_ * list, int32_t size))
    IL2CPP_REGISTER_METHOD(0x015E6120, void, EnsureListElemCount_1, (app::List_1_System_Object_ * list, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_2, (app::List_1_System_Object_ * values))
    IL2CPP_REGISTER_METHOD(0x02FF64F0, app::Object__Array*, ExtractArrayFromListT_1, (app::List_1_System_Object_ * list))
    IL2CPP_REGISTER_METHOD(0x02FF64F0, app::Vector4__Array*, ExtractArrayFromListT_2, (app::List_1_UnityEngine_Vector4_ * list))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_3, (app::List_1_System_Int32_ * values))
    IL2CPP_REGISTER_METHOD(0x015E6120, void, EnsureListElemCount_2, (app::List_1_UnityEngine_Rect_ * list, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02FF64F0, app::Rect__Array*, ExtractArrayFromListT_3, (app::List_1_UnityEngine_Rect_ * list))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_4, (app::List_1_MeshTrail_MeshTrailEmitter_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_5, (app::List_1_UnityEngine_Color32_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_6, (app::List_1_UnityEngine_Color_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_7, (app::List_1_UnityEngine_Vector2_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_8, (app::List_1_UnityEngine_Vector3_ * values))
    IL2CPP_REGISTER_METHOD(0x01539B00, int32_t, SafeLength_9, (app::List_1_UnityEngine_Vector4_ * values))
    IL2CPP_REGISTER_METHOD(0x015E62E0, void, ResizeList_2, (app::List_1_UnityEngine_Rect_ * list, int32_t size))
} // namespace app::classes::UnityEngine::NoAllocHelpers
