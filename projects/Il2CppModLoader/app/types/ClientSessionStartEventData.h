#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientSessionStartEventData {
        namespace {
            app::ClientSessionStartEventData__Class* type_info_ref = nullptr;
        }
        app::ClientSessionStartEventData__Class** type_info = &type_info_ref;
        inline app::ClientSessionStartEventData__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionStartEventData__Class>(type_info, "PlayFab.PlayStreamModels", "ClientSessionStartEventData");
        }
        inline app::ClientSessionStartEventData* create() {
            return il2cpp::create_object<app::ClientSessionStartEventData>(get_class());
        }
    } // namespace ClientSessionStartEventData
} // namespace app::classes::types
