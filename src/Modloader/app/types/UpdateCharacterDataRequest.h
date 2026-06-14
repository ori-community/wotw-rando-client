#pragma once
#include <Modloader/app/structs/UpdateCharacterDataRequest.h>
#include <Modloader/app/structs/UpdateCharacterDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterDataRequest {
        inline app::UpdateCharacterDataRequest__Class** type_info() {
            static app::UpdateCharacterDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateCharacterDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0470B9D0));
            }
            return cache;
        }
        inline app::UpdateCharacterDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterDataRequest__Class>(type_info(), "PlayFab.ClientModels", "UpdateCharacterDataRequest");
        }
        inline app::UpdateCharacterDataRequest* create() {
            return il2cpp::create_object<app::UpdateCharacterDataRequest>(get_class());
        }
    } // namespace UpdateCharacterDataRequest
} // namespace app::classes::types
