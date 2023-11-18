#pragma once
#include <Modloader/app/structs/AddUserVirtualCurrencyRequest.h>
#include <Modloader/app/structs/AddUserVirtualCurrencyRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddUserVirtualCurrencyRequest {
        inline app::AddUserVirtualCurrencyRequest__Class** type_info() {
            static app::AddUserVirtualCurrencyRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddUserVirtualCurrencyRequest__Class**)(modloader::win::memory::resolve_rva(0x04797C30));
            }
            return cache;
        }
        inline app::AddUserVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::AddUserVirtualCurrencyRequest__Class>(type_info(), "PlayFab.ClientModels", "AddUserVirtualCurrencyRequest");
        }
        inline app::AddUserVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::AddUserVirtualCurrencyRequest>(get_class());
        }
    } // namespace AddUserVirtualCurrencyRequest
} // namespace app::classes::types
