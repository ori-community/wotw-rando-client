#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPaymentTokenResult {
        inline app::GetPaymentTokenResult__Class** type_info = (app::GetPaymentTokenResult__Class**)(modloader::win::memory::resolve_rva(0x04752EE8));
        inline app::GetPaymentTokenResult__Class* get_class() {
            return il2cpp::get_class<app::GetPaymentTokenResult__Class>(type_info, "PlayFab.ClientModels", "GetPaymentTokenResult");
        }
        inline app::GetPaymentTokenResult* create() {
            return il2cpp::create_object<app::GetPaymentTokenResult>(get_class());
        }
    } // namespace GetPaymentTokenResult
} // namespace app::classes::types
