#pragma once
#include <Modloader/app/structs/CharacterStatisticChangedEventData.h>
#include <Modloader/app/structs/CharacterStatisticChangedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterStatisticChangedEventData {
        inline app::CharacterStatisticChangedEventData__Class** type_info() {
            static app::CharacterStatisticChangedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterStatisticChangedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterStatisticChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatisticChangedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "CharacterStatisticChangedEventData");
        }
        inline app::CharacterStatisticChangedEventData* create() {
            return il2cpp::create_object<app::CharacterStatisticChangedEventData>(get_class());
        }
    } // namespace CharacterStatisticChangedEventData
} // namespace app::classes::types
