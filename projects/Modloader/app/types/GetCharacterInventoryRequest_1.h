#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterInventoryRequest_1 {
        inline app::GetCharacterInventoryRequest_1__Class** type_info = (app::GetCharacterInventoryRequest_1__Class**)(modloader::win::memory::resolve_rva(0x04733A48));
        inline app::GetCharacterInventoryRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetCharacterInventoryRequest");
        }
        inline app::GetCharacterInventoryRequest_1* create() {
            return il2cpp::create_object<app::GetCharacterInventoryRequest_1>(get_class());
        }
    } // namespace GetCharacterInventoryRequest_1
} // namespace app::classes::types
