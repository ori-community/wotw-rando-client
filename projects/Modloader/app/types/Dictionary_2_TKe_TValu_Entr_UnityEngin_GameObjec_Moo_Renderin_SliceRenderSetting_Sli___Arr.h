#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_UnityEngi_GameObje_Mo_Renderi_SliceRenderSettin_Sli___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_UnityEngin_GameObjec_Moo_Renderin_SliceRenderSetting_Sli___Arr.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[UnityEngine.GameObject,Moon.Rendering.SliceRenderSettings+Slice[]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_Moon_Rendering_SliceRenderSettings_Slice___Array
} // namespace app::classes::types
