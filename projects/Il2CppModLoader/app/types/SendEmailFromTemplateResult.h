#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SendEmailFromTemplateResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SendEmailFromTemplateResult__Class** type_info;
        inline app::SendEmailFromTemplateResult__Class* get_class() {
            return il2cpp::get_class<app::SendEmailFromTemplateResult__Class>(type_info, "PlayFab.ServerModels", "SendEmailFromTemplateResult");
        }
        inline app::SendEmailFromTemplateResult* create() {
            return il2cpp::create_object<app::SendEmailFromTemplateResult>(get_class());
        }
    } // namespace SendEmailFromTemplateResult
} // namespace app::classes::types
