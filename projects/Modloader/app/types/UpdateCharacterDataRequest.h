#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateCharacterDataRequest {
        inline app::UpdateCharacterDataRequest__Class** type_info = (app::UpdateCharacterDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0470B9D0));
        inline app::UpdateCharacterDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterDataRequest__Class>(type_info, "PlayFab.ClientModels", "UpdateCharacterDataRequest");
        }
        inline app::UpdateCharacterDataRequest* create() {
            return il2cpp::create_object<app::UpdateCharacterDataRequest>(get_class());
        }
    } // namespace UpdateCharacterDataRequest
} // namespace app::classes::types
