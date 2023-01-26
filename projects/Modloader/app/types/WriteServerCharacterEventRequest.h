#pragma once
#include <Modloader/app/structs/WriteServerCharacterEventRequest.h>
#include <Modloader/app/structs/WriteServerCharacterEventRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteServerCharacterEventRequest {
        inline app::WriteServerCharacterEventRequest__Class** type_info() {
            static app::WriteServerCharacterEventRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteServerCharacterEventRequest__Class**)(modloader::win::memory::resolve_rva(0x047601B0));
            }
            return cache;
        }
        inline app::WriteServerCharacterEventRequest__Class* get_class() {
            return il2cpp::get_class<app::WriteServerCharacterEventRequest__Class>(type_info(), "PlayFab.ServerModels", "WriteServerCharacterEventRequest");
        }
        inline app::WriteServerCharacterEventRequest* create() {
            return il2cpp::create_object<app::WriteServerCharacterEventRequest>(get_class());
        }
    } // namespace WriteServerCharacterEventRequest
} // namespace app::classes::types
