#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendEmailFromTemplateRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendEmailFromTemplateRequest__Class** type_info;
        inline app::SendEmailFromTemplateRequest__Class* get_class() {
            return il2cpp::get_class<app::SendEmailFromTemplateRequest__Class>(type_info, "PlayFab.ServerModels", "SendEmailFromTemplateRequest");
        }
        inline app::SendEmailFromTemplateRequest* create() {
            return il2cpp::create_object<app::SendEmailFromTemplateRequest>(get_class());
        }
    } // namespace SendEmailFromTemplateRequest
} // namespace app::classes::types
