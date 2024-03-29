#pragma once
#include <Modloader/app/structs/GetCharacterInventoryResult.h>
#include <Modloader/app/structs/GetCharacterInventoryResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterInventoryResult {
        inline app::GetCharacterInventoryResult__Class** type_info() {
            static app::GetCharacterInventoryResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterInventoryResult__Class**)(modloader::win::memory::resolve_rva(0x04722400));
            }
            return cache;
        }
        inline app::GetCharacterInventoryResult__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryResult__Class>(type_info(), "PlayFab.ClientModels", "GetCharacterInventoryResult");
        }
        inline app::GetCharacterInventoryResult* create() {
            return il2cpp::create_object<app::GetCharacterInventoryResult>(get_class());
        }
    } // namespace GetCharacterInventoryResult
} // namespace app::classes::types
