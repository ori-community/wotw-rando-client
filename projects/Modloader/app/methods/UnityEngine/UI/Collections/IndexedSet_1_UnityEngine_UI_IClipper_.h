#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IClipper.h>
#include <Modloader/app/structs/IndexedSet_1_UnityEngine_UI_IClipper_.h>

namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_UnityEngine_UI_IClipper_ {
    IL2CPP_REGISTER_METHOD(0x02ACD120, void, ctor, app::IndexedSet_1_UnityEngine_UI_IClipper_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACD8A0, app::IClipper*, get_Item, app::IndexedSet_1_UnityEngine_UI_IClipper_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02ACD5F0, int32_t, get_Count, app::IndexedSet_1_UnityEngine_UI_IClipper_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02ACD3D0, bool, AddUnique, app::IndexedSet_1_UnityEngine_UI_IClipper_* this_ptr, app::IClipper* item)
    IL2CPP_REGISTER_METHOD(0x02ACD4C0, bool, Remove, app::IndexedSet_1_UnityEngine_UI_IClipper_* this_ptr, app::IClipper* item)
} // namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_UnityEngine_UI_IClipper_
