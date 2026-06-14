#pragma once
#include <Modloader/app/structs/ClientSessionStartPayload.h>
#include <Modloader/app/structs/ClientSessionStartPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientSessionStartPayload {
        inline app::ClientSessionStartPayload__Class** type_info() {
            static app::ClientSessionStartPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClientSessionStartPayload__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClientSessionStartPayload__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionStartPayload__Class>(type_info(), "PlayFab.PlayStreamModels", "ClientSessionStartPayload");
        }
        inline app::ClientSessionStartPayload* create() {
            return il2cpp::create_object<app::ClientSessionStartPayload>(get_class());
        }
    } // namespace ClientSessionStartPayload
} // namespace app::classes::types
