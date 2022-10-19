#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveContactEmailRequest {
        inline app::RemoveContactEmailRequest__Class** type_info = (app::RemoveContactEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x04722E40));
        inline app::RemoveContactEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveContactEmailRequest__Class>(type_info, "PlayFab.ClientModels", "RemoveContactEmailRequest");
        }
        inline app::RemoveContactEmailRequest* create() {
            return il2cpp::create_object<app::RemoveContactEmailRequest>(get_class());
        }
    } // namespace RemoveContactEmailRequest
} // namespace app::classes::types
