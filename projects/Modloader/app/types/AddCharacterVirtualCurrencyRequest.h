#pragma once
#include <Modloader/app/structs/AddCharacterVirtualCurrencyRequest.h>
#include <Modloader/app/structs/AddCharacterVirtualCurrencyRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddCharacterVirtualCurrencyRequest {
        inline app::AddCharacterVirtualCurrencyRequest__Class** type_info() {
            static app::AddCharacterVirtualCurrencyRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddCharacterVirtualCurrencyRequest__Class**)(modloader::win::memory::resolve_rva(0x0476AC18));
            }
            return cache;
        }
        inline app::AddCharacterVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::AddCharacterVirtualCurrencyRequest__Class>(type_info(), "PlayFab.ServerModels", "AddCharacterVirtualCurrencyRequest");
        }
        inline app::AddCharacterVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::AddCharacterVirtualCurrencyRequest>(get_class());
        }
    } // namespace AddCharacterVirtualCurrencyRequest
} // namespace app::classes::types
