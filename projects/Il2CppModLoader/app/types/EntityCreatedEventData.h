#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityCreatedEventData {
        namespace {
            app::EntityCreatedEventData__Class* type_info_ref = nullptr;
        }
        app::EntityCreatedEventData__Class** type_info = &type_info_ref;
        inline app::EntityCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityCreatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityCreatedEventData");
        }
        inline app::EntityCreatedEventData* create() {
            return il2cpp::create_object<app::EntityCreatedEventData>(get_class());
        }
    } // namespace EntityCreatedEventData
} // namespace app::classes::types
