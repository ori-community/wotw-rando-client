#pragma once
#include <Modloader/app/structs/EntityCreatedEventData.h>
#include <Modloader/app/structs/EntityCreatedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityCreatedEventData {
        inline app::EntityCreatedEventData__Class** type_info() {
            static app::EntityCreatedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityCreatedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityCreatedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "EntityCreatedEventData");
        }
        inline app::EntityCreatedEventData* create() {
            return il2cpp::create_object<app::EntityCreatedEventData>(get_class());
        }
    } // namespace EntityCreatedEventData
} // namespace app::classes::types
