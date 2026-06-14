#pragma once
#include <Modloader/app/structs/EntityObjectsSetEventData.h>
#include <Modloader/app/structs/EntityObjectsSetEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityObjectsSetEventData {
        inline app::EntityObjectsSetEventData__Class** type_info() {
            static app::EntityObjectsSetEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityObjectsSetEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityObjectsSetEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityObjectsSetEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "EntityObjectsSetEventData");
        }
        inline app::EntityObjectsSetEventData* create() {
            return il2cpp::create_object<app::EntityObjectsSetEventData>(get_class());
        }
    } // namespace EntityObjectsSetEventData
} // namespace app::classes::types
