#pragma once
#include <Modloader/app/structs/ClientFocusChangePayload.h>
#include <Modloader/app/structs/ClientFocusChangePayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientFocusChangePayload {
        inline app::ClientFocusChangePayload__Class** type_info() {
            static app::ClientFocusChangePayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClientFocusChangePayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClientFocusChangePayload__Class* get_class() {
            return il2cpp::get_class<app::ClientFocusChangePayload__Class>(type_info(), "PlayFab.PlayStreamModels", "ClientFocusChangePayload");
        }
        inline app::ClientFocusChangePayload* create() {
            return il2cpp::create_object<app::ClientFocusChangePayload>(get_class());
        }
    } // namespace ClientFocusChangePayload
} // namespace app::classes::types
