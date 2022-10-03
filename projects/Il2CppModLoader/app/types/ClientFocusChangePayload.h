#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientFocusChangePayload {
        namespace {
            app::ClientFocusChangePayload__Class* type_info_ref = nullptr;
        }
        app::ClientFocusChangePayload__Class** type_info = &type_info_ref;
        inline app::ClientFocusChangePayload__Class* get_class() {
            return il2cpp::get_class<app::ClientFocusChangePayload__Class>(type_info, "PlayFab.PlayStreamModels", "ClientFocusChangePayload");
        }
        inline app::ClientFocusChangePayload* create() {
            return il2cpp::create_object<app::ClientFocusChangePayload>(get_class());
        }
    } // namespace ClientFocusChangePayload
} // namespace app::classes::types
