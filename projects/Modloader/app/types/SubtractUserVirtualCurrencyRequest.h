#pragma once
#include <Modloader/app/structs/SubtractUserVirtualCurrencyRequest.h>
#include <Modloader/app/structs/SubtractUserVirtualCurrencyRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubtractUserVirtualCurrencyRequest {
        inline app::SubtractUserVirtualCurrencyRequest__Class** type_info() {
            static app::SubtractUserVirtualCurrencyRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubtractUserVirtualCurrencyRequest__Class**)(modloader::win::memory::resolve_rva(0x047698C8));
            }
            return cache;
        }
        inline app::SubtractUserVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::SubtractUserVirtualCurrencyRequest__Class>(type_info(), "PlayFab.ClientModels", "SubtractUserVirtualCurrencyRequest");
        }
        inline app::SubtractUserVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::SubtractUserVirtualCurrencyRequest>(get_class());
        }
    } // namespace SubtractUserVirtualCurrencyRequest
} // namespace app::classes::types
