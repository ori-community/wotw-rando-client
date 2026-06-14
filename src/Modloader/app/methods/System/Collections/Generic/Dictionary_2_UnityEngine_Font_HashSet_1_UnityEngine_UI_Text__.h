#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_UnityEngine_Font_HashSet_1_UnityEngine_UI_Text_.h>
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/HashSet_1_UnityEngine_UI_Text_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Font_HashSet_1_UnityEngine_UI_Text__ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_UnityEngine_Font_HashSet_1_UnityEngine_UI_Text_* this_ptr,
        app::Font* key,
        app::HashSet_1_UnityEngine_UI_Text_** value
    )
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_UnityEngine_Font_HashSet_1_UnityEngine_UI_Text_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_UnityEngine_Font_HashSet_1_UnityEngine_UI_Text_* this_ptr,
        app::Font* key,
        app::HashSet_1_UnityEngine_UI_Text_* value
    )
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_UnityEngine_Font_HashSet_1_UnityEngine_UI_Text_* this_ptr, app::Font* key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_Font_HashSet_1_UnityEngine_UI_Text_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Font_HashSet_1_UnityEngine_UI_Text__
