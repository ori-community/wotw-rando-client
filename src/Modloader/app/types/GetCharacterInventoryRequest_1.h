#pragma once
#include <Modloader/app/structs/GetCharacterInventoryRequest_1.h>
#include <Modloader/app/structs/GetCharacterInventoryRequest_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterInventoryRequest_1 {
        inline app::GetCharacterInventoryRequest_1__Class** type_info() {
            static app::GetCharacterInventoryRequest_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterInventoryRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04733A48));
            }
            return cache;
        }
        inline app::GetCharacterInventoryRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryRequest_1__Class>(type_info(), "PlayFab.ServerModels", "GetCharacterInventoryRequest");
        }
        inline app::GetCharacterInventoryRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterInventoryRequest_1>(get_class());
        }
    } // namespace GetCharacterInventoryRequest_1
} // namespace app::classes::types
