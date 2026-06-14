#pragma once
#include <Modloader/app/structs/CharacterStatisticDeletedEventData.h>
#include <Modloader/app/structs/CharacterStatisticDeletedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterStatisticDeletedEventData {
        inline app::CharacterStatisticDeletedEventData__Class** type_info() {
            static app::CharacterStatisticDeletedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterStatisticDeletedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterStatisticDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterStatisticDeletedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "CharacterStatisticDeletedEventData");
        }
        inline app::CharacterStatisticDeletedEventData* create() {
            return il2cpp::create_object<app::CharacterStatisticDeletedEventData>(get_class());
        }
    } // namespace CharacterStatisticDeletedEventData
} // namespace app::classes::types
