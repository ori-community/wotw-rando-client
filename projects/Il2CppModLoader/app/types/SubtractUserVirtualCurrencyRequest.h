#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubtractUserVirtualCurrencyRequest {
        inline app::SubtractUserVirtualCurrencyRequest__Class** type_info = (app::SubtractUserVirtualCurrencyRequest__Class**)(modloader::win::memory::resolve_rva(0x047698C8));
        inline app::SubtractUserVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::SubtractUserVirtualCurrencyRequest__Class>(type_info, "PlayFab.ClientModels", "SubtractUserVirtualCurrencyRequest");
        }
        inline app::SubtractUserVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::SubtractUserVirtualCurrencyRequest>(get_class());
        }
    } // namespace SubtractUserVirtualCurrencyRequest
} // namespace app::classes::types
