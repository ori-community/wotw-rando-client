#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientFocusChangeEventData {
        namespace {
            app::ClientFocusChangeEventData__Class* type_info_ref = nullptr;
        }
        app::ClientFocusChangeEventData__Class** type_info = &type_info_ref;
        inline app::ClientFocusChangeEventData__Class* get_class() {
            return il2cpp::get_class<app::ClientFocusChangeEventData__Class>(type_info, "PlayFab.PlayStreamModels", "ClientFocusChangeEventData");
        }
        inline app::ClientFocusChangeEventData* create() {
            return il2cpp::create_object<app::ClientFocusChangeEventData>(get_class());
        }
    } // namespace ClientFocusChangeEventData
} // namespace app::classes::types
