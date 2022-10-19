#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddCharacterVirtualCurrencyRequest {
        inline app::AddCharacterVirtualCurrencyRequest__Class** type_info = (app::AddCharacterVirtualCurrencyRequest__Class**)(modloader::win::memory::resolve_rva(0x0476AC18));
        inline app::AddCharacterVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::AddCharacterVirtualCurrencyRequest__Class>(type_info, "PlayFab.ServerModels", "AddCharacterVirtualCurrencyRequest");
        }
        inline app::AddCharacterVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::AddCharacterVirtualCurrencyRequest>(get_class());
        }
    } // namespace AddCharacterVirtualCurrencyRequest
} // namespace app::classes::types
