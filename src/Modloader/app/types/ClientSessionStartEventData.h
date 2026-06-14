#pragma once
#include <Modloader/app/structs/ClientSessionStartEventData.h>
#include <Modloader/app/structs/ClientSessionStartEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientSessionStartEventData {
        inline app::ClientSessionStartEventData__Class** type_info() {
            static app::ClientSessionStartEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClientSessionStartEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClientSessionStartEventData__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionStartEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "ClientSessionStartEventData");
        }
        inline app::ClientSessionStartEventData* create() {
            return il2cpp::create_object<app::ClientSessionStartEventData>(get_class());
        }
    } // namespace ClientSessionStartEventData
} // namespace app::classes::types
