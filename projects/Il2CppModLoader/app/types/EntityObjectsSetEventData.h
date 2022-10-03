#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityObjectsSetEventData {
        namespace {
            app::EntityObjectsSetEventData__Class* type_info_ref = nullptr;
        }
        app::EntityObjectsSetEventData__Class** type_info = &type_info_ref;
        inline app::EntityObjectsSetEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityObjectsSetEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityObjectsSetEventData");
        }
        inline app::EntityObjectsSetEventData* create() {
            return il2cpp::create_object<app::EntityObjectsSetEventData>(get_class());
        }
    } // namespace EntityObjectsSetEventData
} // namespace app::classes::types
