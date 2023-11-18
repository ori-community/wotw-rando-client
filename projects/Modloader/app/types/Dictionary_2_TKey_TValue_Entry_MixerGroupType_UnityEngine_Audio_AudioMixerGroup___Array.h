#pragma once
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audi_AudioMixerGrou___Arra__Clas.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[MixerGroupType,UnityEngine.Audio.AudioMixerGroup][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_MixerGroupType_UnityEngine_Audio_AudioMixerGroup___Array
} // namespace app::classes::types
