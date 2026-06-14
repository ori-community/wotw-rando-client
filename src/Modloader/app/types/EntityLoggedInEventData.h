#pragma once
#include <Modloader/app/structs/EntityLoggedInEventData.h>
#include <Modloader/app/structs/EntityLoggedInEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityLoggedInEventData {
        inline app::EntityLoggedInEventData__Class** type_info() {
            static app::EntityLoggedInEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityLoggedInEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityLoggedInEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityLoggedInEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "EntityLoggedInEventData");
        }
        inline app::EntityLoggedInEventData* create() {
            return il2cpp::create_object<app::EntityLoggedInEventData>(get_class());
        }
    } // namespace EntityLoggedInEventData
} // namespace app::classes::types
