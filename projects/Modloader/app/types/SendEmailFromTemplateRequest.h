#pragma once
#include <Modloader/app/structs/SendEmailFromTemplateRequest.h>
#include <Modloader/app/structs/SendEmailFromTemplateRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SendEmailFromTemplateRequest {
        inline app::SendEmailFromTemplateRequest__Class** type_info() {
            static app::SendEmailFromTemplateRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SendEmailFromTemplateRequest__Class**)(modloader::win::memory::resolve_rva(0x04738FC0));
            }
            return cache;
        }
        inline app::SendEmailFromTemplateRequest__Class* get_class() {
            return il2cpp::get_class<app::SendEmailFromTemplateRequest__Class>(type_info(), "PlayFab.ServerModels", "SendEmailFromTemplateRequest");
        }
        inline app::SendEmailFromTemplateRequest* create() {
            return il2cpp::create_object<app::SendEmailFromTemplateRequest>(get_class());
        }
    } // namespace SendEmailFromTemplateRequest
} // namespace app::classes::types
