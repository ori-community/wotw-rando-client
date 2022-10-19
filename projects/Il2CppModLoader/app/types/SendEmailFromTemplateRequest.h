#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SendEmailFromTemplateRequest {
        inline app::SendEmailFromTemplateRequest__Class** type_info = (app::SendEmailFromTemplateRequest__Class**)(modloader::win::memory::resolve_rva(0x04738FC0));
        inline app::SendEmailFromTemplateRequest__Class* get_class() {
            return il2cpp::get_class<app::SendEmailFromTemplateRequest__Class>(type_info, "PlayFab.ServerModels", "SendEmailFromTemplateRequest");
        }
        inline app::SendEmailFromTemplateRequest* create() {
            return il2cpp::create_object<app::SendEmailFromTemplateRequest>(get_class());
        }
    } // namespace SendEmailFromTemplateRequest
} // namespace app::classes::types
