#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SendEmailFromTemplateResult__Class.h>
#include <Modloader/app/structs/SendEmailFromTemplateResult.h>

namespace app::classes::types {
    namespace SendEmailFromTemplateResult {
        inline app::SendEmailFromTemplateResult__Class** type_info = (app::SendEmailFromTemplateResult__Class**)(modloader::win::memory::resolve_rva(0x04759FF0));
        inline app::SendEmailFromTemplateResult__Class* get_class() {
            return il2cpp::get_class<app::SendEmailFromTemplateResult__Class>(type_info, "PlayFab.ServerModels", "SendEmailFromTemplateResult");
        }
        inline app::SendEmailFromTemplateResult* create() {
            return il2cpp::create_object<app::SendEmailFromTemplateResult>(get_class());
        }
    } // namespace SendEmailFromTemplateResult
} // namespace app::classes::types
