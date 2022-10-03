#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityLoggedInEventData {
        namespace {
            app::EntityLoggedInEventData__Class* type_info_ref = nullptr;
        }
        app::EntityLoggedInEventData__Class** type_info = &type_info_ref;
        inline app::EntityLoggedInEventData__Class* get_class() {
            return il2cpp::get_class<app::EntityLoggedInEventData__Class>(type_info, "PlayFab.PlayStreamModels", "EntityLoggedInEventData");
        }
        inline app::EntityLoggedInEventData* create() {
            return il2cpp::create_object<app::EntityLoggedInEventData>(get_class());
        }
    } // namespace EntityLoggedInEventData
} // namespace app::classes::types
