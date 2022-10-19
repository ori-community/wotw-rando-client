#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddGenericIDRequest {
        inline app::AddGenericIDRequest__Class** type_info = (app::AddGenericIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04781768));
        inline app::AddGenericIDRequest__Class* get_class() {
            return il2cpp::get_class<app::AddGenericIDRequest__Class>(type_info, "PlayFab.ClientModels", "AddGenericIDRequest");
        }
        inline app::AddGenericIDRequest* create() {
            return il2cpp::create_object<app::AddGenericIDRequest>(get_class());
        }
    } // namespace AddGenericIDRequest
} // namespace app::classes::types
