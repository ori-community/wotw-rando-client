#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClientFocusChangeEventData {
        namespace {
            inline app::ClientFocusChangeEventData__Class* type_info_ref = nullptr;
        }
        inline app::ClientFocusChangeEventData__Class** type_info = &type_info_ref;
        inline app::ClientFocusChangeEventData__Class* get_class() {
            return il2cpp::get_class<app::ClientFocusChangeEventData__Class>(type_info, "PlayFab.PlayStreamModels", "ClientFocusChangeEventData");
        }
        inline app::ClientFocusChangeEventData* create() {
            return il2cpp::create_object<app::ClientFocusChangeEventData>(get_class());
        }
    } // namespace ClientFocusChangeEventData
} // namespace app::classes::types
