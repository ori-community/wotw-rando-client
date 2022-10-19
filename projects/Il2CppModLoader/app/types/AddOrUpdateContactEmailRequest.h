#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddOrUpdateContactEmailRequest {
        inline app::AddOrUpdateContactEmailRequest__Class** type_info = (app::AddOrUpdateContactEmailRequest__Class**)(modloader::win::memory::resolve_rva(0x04717BB8));
        inline app::AddOrUpdateContactEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::AddOrUpdateContactEmailRequest__Class>(type_info, "PlayFab.ClientModels", "AddOrUpdateContactEmailRequest");
        }
        inline app::AddOrUpdateContactEmailRequest* create() {
            return il2cpp::create_object<app::AddOrUpdateContactEmailRequest>(get_class());
        }
    } // namespace AddOrUpdateContactEmailRequest
} // namespace app::classes::types
