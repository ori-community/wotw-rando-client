#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IndexedSet_1_UnityEngine_UI_Graphic_.h>
#include <Modloader/app/structs/Graphic.h>

namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_UnityEngine_UI_Graphic_ {
    IL2CPP_REGISTER_METHOD(0x02ACD3D0, bool, AddUnique, (app::IndexedSet_1_UnityEngine_UI_Graphic_ * this_ptr, app::Graphic* item))
    IL2CPP_REGISTER_METHOD(0x02ACD120, void, ctor, (app::IndexedSet_1_UnityEngine_UI_Graphic_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ACD320, void, Add, (app::IndexedSet_1_UnityEngine_UI_Graphic_ * this_ptr, app::Graphic* item))
    IL2CPP_REGISTER_METHOD(0x02ACD4C0, bool, Remove, (app::IndexedSet_1_UnityEngine_UI_Graphic_ * this_ptr, app::Graphic* item))
    IL2CPP_REGISTER_METHOD(0x02ACD5F0, int32_t, get_Count, (app::IndexedSet_1_UnityEngine_UI_Graphic_ * this_ptr))
} // namespace app::classes::UnityEngine::UI::Collections::IndexedSet_1_UnityEngine_UI_Graphic_
