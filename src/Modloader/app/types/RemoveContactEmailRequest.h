#pragma once
#include <Modloader/app/structs/RemoveContactEmailRequest.h>
#include <Modloader/app/structs/RemoveContactEmailRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveContactEmailRequest {
        inline app::RemoveContactEmailRequest__Class** type_info() {
            static app::RemoveContactEmailRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveContactEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x04722E40));
            }
            return cache;
        }
        inline app::RemoveContactEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveContactEmailRequest__Class>(type_info(), "PlayFab.ClientModels", "RemoveContactEmailRequest");
        }
        inline app::RemoveContactEmailRequest* create() {
            return il2cpp::create_object<app::RemoveContactEmailRequest>(get_class());
        }
    } // namespace RemoveContactEmailRequest
} // namespace app::classes::types
