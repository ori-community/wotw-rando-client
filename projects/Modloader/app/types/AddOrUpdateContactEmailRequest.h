#pragma once
#include <Modloader/app/structs/AddOrUpdateContactEmailRequest.h>
#include <Modloader/app/structs/AddOrUpdateContactEmailRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddOrUpdateContactEmailRequest {
        inline app::AddOrUpdateContactEmailRequest__Class** type_info() {
            static app::AddOrUpdateContactEmailRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddOrUpdateContactEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x04717BB8));
            }
            return cache;
        }
        inline app::AddOrUpdateContactEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::AddOrUpdateContactEmailRequest__Class>(type_info(), "PlayFab.ClientModels", "AddOrUpdateContactEmailRequest");
        }
        inline app::AddOrUpdateContactEmailRequest* create() {
            return il2cpp::create_object<app::AddOrUpdateContactEmailRequest>(get_class());
        }
    } // namespace AddOrUpdateContactEmailRequest
} // namespace app::classes::types
