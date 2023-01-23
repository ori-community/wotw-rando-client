#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SubtractCharacterVirtualCurrencyRequest__Class.h>
#include <Modloader/app/structs/SubtractCharacterVirtualCurrencyRequest.h>

namespace app::classes::types {
    namespace SubtractCharacterVirtualCurrencyRequest {
        inline app::SubtractCharacterVirtualCurrencyRequest__Class** type_info = (app::SubtractCharacterVirtualCurrencyRequest__Class**)(modloader::win::memory::resolve_rva(0x047281D8));
        inline app::SubtractCharacterVirtualCurrencyRequest__Class* get_class() {
            return il2cpp::get_class<app::SubtractCharacterVirtualCurrencyRequest__Class>(type_info, "PlayFab.ServerModels", "SubtractCharacterVirtualCurrencyRequest");
        }
        inline app::SubtractCharacterVirtualCurrencyRequest* create() {
            return il2cpp::create_object<app::SubtractCharacterVirtualCurrencyRequest>(get_class());
        }
    } // namespace SubtractCharacterVirtualCurrencyRequest
} // namespace app::classes::types
