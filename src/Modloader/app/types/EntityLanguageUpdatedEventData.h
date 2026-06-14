#pragma once
#include <Modloader/app/structs/EntityLanguageUpdatedEventData.h>
#include <Modloader/app/structs/EntityLanguageUpdatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityLanguageUpdatedEventData {
        inline app::EntityLanguageUpdatedEventData__Class** type_info() {
            static app::EntityLanguageUpdatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityLanguageUpdatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityLanguageUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityLanguageUpdatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "EntityLanguageUpdatedEventData");
        }
        inline app::EntityLanguageUpdatedEventData* create() {
            return il2cpp::create_object<app::EntityLanguageUpdatedEventData>(get_class());
        }
    } // namespace EntityLanguageUpdatedEventData
} // namespace app::classes::types
