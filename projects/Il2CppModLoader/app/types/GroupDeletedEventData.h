#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupDeletedEventData {
        namespace {
            app::GroupDeletedEventData__Class* type_info_ref = nullptr;
        }
        app::GroupDeletedEventData__Class** type_info = &type_info_ref;
        inline app::GroupDeletedEventData__Class* get_class() {
            return il2cpp::get_class<app::GroupDeletedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GroupDeletedEventData");
        }
        inline app::GroupDeletedEventData* create() {
            return il2cpp::create_object<app::GroupDeletedEventData>(get_class());
        }
    } // namespace GroupDeletedEventData
} // namespace app::classes::types
