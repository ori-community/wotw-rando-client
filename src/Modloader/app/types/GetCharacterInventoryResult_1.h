#pragma once
#include <Modloader/app/structs/GetCharacterInventoryResult_1.h>
#include <Modloader/app/structs/GetCharacterInventoryResult_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterInventoryResult_1 {
        inline app::GetCharacterInventoryResult_1__Class** type_info() {
            static app::GetCharacterInventoryResult_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterInventoryResult_1__Class**)(modloader::win::memory::resolve_rva(0x0477DD38));
            }
            return cache;
        }
        inline app::GetCharacterInventoryResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryResult_1__Class>(type_info(), "PlayFab.ServerModels", "GetCharacterInventoryResult");
        }
        inline app::GetCharacterInventoryResult_1* create() {
            return il2cpp::create_object<app::GetCharacterInventoryResult_1>(get_class());
        }
    } // namespace GetCharacterInventoryResult_1
} // namespace app::classes::types
