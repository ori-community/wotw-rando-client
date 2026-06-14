#pragma once
#include <Modloader/app/structs/CharacterConsumedItemEventData.h>
#include <Modloader/app/structs/CharacterConsumedItemEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterConsumedItemEventData {
        inline app::CharacterConsumedItemEventData__Class** type_info() {
            static app::CharacterConsumedItemEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterConsumedItemEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterConsumedItemEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterConsumedItemEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "CharacterConsumedItemEventData");
        }
        inline app::CharacterConsumedItemEventData* create() {
            return il2cpp::create_object<app::CharacterConsumedItemEventData>(get_class());
        }
    } // namespace CharacterConsumedItemEventData
} // namespace app::classes::types
