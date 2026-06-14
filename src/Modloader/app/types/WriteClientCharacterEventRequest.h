#pragma once
#include <Modloader/app/structs/WriteClientCharacterEventRequest.h>
#include <Modloader/app/structs/WriteClientCharacterEventRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteClientCharacterEventRequest {
        inline app::WriteClientCharacterEventRequest__Class** type_info() {
            static app::WriteClientCharacterEventRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteClientCharacterEventRequest__Class**)(modloader::win::memory::resolve_rva(0x04758D50));
            }
            return cache;
        }
        inline app::WriteClientCharacterEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteClientCharacterEventRequest__Class>(type_info(), "PlayFab.ClientModels", "WriteClientCharacterEventRequest");
        }
        inline app::WriteClientCharacterEventRequest* create() {
            return il2cpp::create_object<app::WriteClientCharacterEventRequest>(get_class());
        }
    } // namespace WriteClientCharacterEventRequest
} // namespace app::classes::types
