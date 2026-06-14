#pragma once
#include <Modloader/app/structs/CharacterCreatedEventData.h>
#include <Modloader/app/structs/CharacterCreatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterCreatedEventData {
        inline app::CharacterCreatedEventData__Class** type_info() {
            static app::CharacterCreatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterCreatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::CharacterCreatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "CharacterCreatedEventData");
        }
        inline app::CharacterCreatedEventData* create() {
            return il2cpp::create_object<app::CharacterCreatedEventData>(get_class());
        }
    } // namespace CharacterCreatedEventData
} // namespace app::classes::types
