#pragma once
#include <Modloader/app/structs/ClientFocusChangeEventData.h>
#include <Modloader/app/structs/ClientFocusChangeEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientFocusChangeEventData {
        inline app::ClientFocusChangeEventData__Class** type_info() {
            static app::ClientFocusChangeEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClientFocusChangeEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClientFocusChangeEventData__Class* get_class() {
            return il2cpp::get_class<app::ClientFocusChangeEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "ClientFocusChangeEventData");
        }
        inline app::ClientFocusChangeEventData* create() {
            return il2cpp::create_object<app::ClientFocusChangeEventData>(get_class());
        }
    } // namespace ClientFocusChangeEventData
} // namespace app::classes::types
