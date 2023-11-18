#pragma once
#include <Modloader/app/structs/GetPaymentTokenResult.h>
#include <Modloader/app/structs/GetPaymentTokenResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPaymentTokenResult {
        inline app::GetPaymentTokenResult__Class** type_info() {
            static app::GetPaymentTokenResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPaymentTokenResult__Class**)(modloader::win::memory::resolve_rva(0x04752EE8));
            }
            return cache;
        }
        inline app::GetPaymentTokenResult__Class* get_class() {
            return il2cpp::get_class<app::GetPaymentTokenResult__Class>(type_info(), "PlayFab.ClientModels", "GetPaymentTokenResult");
        }
        inline app::GetPaymentTokenResult* create() {
            return il2cpp::create_object<app::GetPaymentTokenResult>(get_class());
        }
    } // namespace GetPaymentTokenResult
} // namespace app::classes::types
