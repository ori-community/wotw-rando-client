#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IndexedSet_1_UnityEngine_UI_IClipper_.h>
#include <Modloader/app/structs/IClipper.h>

namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_UnityEngine_UI_IClipper_ {
    IL2CPP_REGISTER_METHOD(0x02ACD120, void, ctor, (app::IndexedSet_1_UnityEngine_UI_IClipper_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C458, IndexedSet_1_UnityEngine_UI_IClipper___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACD8A0, app::IClipper*, get_Item, (app::IndexedSet_1_UnityEngine_UI_IClipper_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04758C60, IndexedSet_1_UnityEngine_UI_IClipper__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACD5F0, int32_t, get_Count, (app::IndexedSet_1_UnityEngine_UI_IClipper_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474BC38, IndexedSet_1_UnityEngine_UI_IClipper__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACD3D0, bool, AddUnique, (app::IndexedSet_1_UnityEngine_UI_IClipper_ * this_ptr, app::IClipper* item))
    IL2CPP_REGISTER_METHODINFO(0x04712F38, IndexedSet_1_UnityEngine_UI_IClipper__AddUnique__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACD4C0, bool, Remove, (app::IndexedSet_1_UnityEngine_UI_IClipper_ * this_ptr, app::IClipper* item))
    IL2CPP_REGISTER_METHODINFO(0x047565C0, IndexedSet_1_UnityEngine_UI_IClipper__Remove__MethodInfo)
} // namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_UnityEngine_UI_IClipper_
